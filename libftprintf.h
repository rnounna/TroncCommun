#ifndef LIBFTPRINT_H
# define LIBFTPRINT_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

void    ft_putstr(char *s);
void    wr_number(char c);
void    wr_hex_number_x(char c);
void    wr_hex_number_X(char c);
void    ft_putnbr(int n);
void    ft_unsigned_putnbr(unsigned int n);
void	ft_hex_putnbr_x(int n);
void	ft_hex_putnbr_X(int n);
void	display_adress(int n);

#endif