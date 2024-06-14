/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amzaidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 14:51:09 by amzaidi           #+#    #+#             */
/*   Updated: 2024/06/14 16:05:10 by amzaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_ret_value(int ret, int fd, char *buf)
{
	ret = read(fd, buf, BUFFER_SIZE);
	buf[ret] = 0;
	return (ret);
}

int	ft_check_return(int ret, char **str)
{
	if (ret == 0 && (*str)[0] == 0)
	{
		free(*str);
		*str = NULL;
		return (0);
	}
	return (1);
}

int	ft_ckeck_error(int fd, char **line)
{
	if ((fd < 0 || fd > 1023) || !line || BUFFER_SIZE <= 0)
		return (-1);
	return (1);
}
char	*ft_select(char *buf, int *ret)
{
	int	i;
	char	*dest;

	i = 0;
	while(buf && buf[i] && buf[i] != '\n')
		i++;
	dest = malloc(i + 1);
	if (!dest)
		*ret = 1;
	i = 0;
	while (buf && buf[i] && buf[i] != '\n')
	{
		dest[i] = buf[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_select2(char *buf)
{
	int	i;
	int	j;
	char	*dest;

	i = 0;
	while(buf && buf[i] && buf[i] != '\n')
		i++;
	dest = malloc(sizeof(*dest) * (ft_strlen(buf) - i + 1));
	if (!dest)
		return (NULL);
	j = 0;
	while(buf && buf[i])
		dest[j++] = buf[++i];
	dest[j] = 0;
	return dest;
}

char	*get_next_line(int fd)
{
	char *line = NULL;
	static char *str = NULL;
	int	ret;
	char buf[BUFFER_SIZE + 1];
	char *temp;

	ret = 1;
	if (fd < 0 || BUFFER_SIZE <= 0 || fd > 1023)
		return (NULL); 
	while (ret > 0)
	{
		ret = read(fd, buf, BUFFER_SIZE);
		buf[ret] = 0;
		temp = str;
		str = ft_strjoin(temp, buf);
		free(temp);
		if (ft_strchr(str, '\n') == 1)
			break;
	}
	line = ft_select(str,&ret);
	temp = str;
	str = ft_select2(temp);
	free(temp);
	if (ft_check_return(ret, &str) == 0 && line[0] == '\0')
		return (NULL);
	return (line);
}
