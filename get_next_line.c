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

char	*ft_free(char *buffer, char *buf)
{
	char	*line;
	line = ft_strjoin(buffer,buf);
	free(buffer);
	return line;
}	

char	*get_next(char *buffer)
{
	char	*new_buffer;
	int	i;
	int	j;

	j = 0;
	i = 0;
	while(buffer[i] && buffer[i] != '\n')
	{
		i++;
	}
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	new_buffer = malloc(sizeof(char) * (ft_strlen(buffer) - i + 1));
	if(!new_buffer)
		return NULL;
	j = 0;
	i++;
	while(buffer[i])
		new_buffer[j++] = buffer[i++];
	new_buffer[j] = '\0';
	free(buffer);
	return (new_buffer);
}

char	*get_line(char *buffer)
{
	char	*line;
	int	i;

	line = NULL;
	i = 0;
	while(buffer[i] && buffer[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 2));
	if (!line)
		return NULL;
	i = 0;
	while(buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] && buffer[i] == '\n')
		line[i++] = '\n';
	line[i] = 0;
	return (line);
}

char	*read_line(int fd, char *line)
{
	int	o;
	char	*buffer;
	o = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	while(o > 0)
	{
		if(o == -1)
		{
			free(buffer);
			return (NULL);
		}
		o = read(fd, buffer, BUFFER_SIZE);
		buffer[o] = '\0';
		line = ft_free(line,buffer);
		if(ft_strchr(buffer,'\n'))
			break;
	}
	free(buffer);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char 		*line;
	buffer = read_line(fd,buffer);
	if (!buffer)
		return NULL;
	line = get_line(buffer);
	buffer = get_next(buffer);
	//line[ft_strlen(line)] = 0;
	return (line);
}
/*
int	main()
{
	int fd = open("fichier.txt", O_RDONLY);
	if (fd == -1)
		return 1;
	char *line = get_next_line(fd);
	printf("1 : ->%s<-\n",line);
	free(line);
	line = get_next_line(fd);
        printf("2 : ->%s<-\n",line);
	free(line);
	line = get_next_line(fd);
	printf("3 : ->%s<-\n",line);
	free(line);
	line = get_next_line(fd);
	printf("4 : ->%s<-\n",line);
	free(line);
	line = get_next_line(fd);
	printf("5 : ->%s<-\n",line);
	free(line);
	line = get_next_line(fd);
	printf("6 : ->%s<-\n",line);
	free(line);
	line = get_next_line(fd);
	printf("7 : ->%s<-\n",line);
	free(line);
	line = get_next_line(fd);
	printf("8 : ->%s<-\n",line);
	free(line);
	line = get_next_line(fd);
	printf("9 : ->%s<-\n",line);
	free(line);
	close(fd);
	return 0;
}*/
