/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptheo <ptheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:34:06 by ptheo             #+#    #+#             */
/*   Updated: 2024/04/21 15:34:07 by ptheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <fcntl.h>
# define HEXA_MIN "0123456789abcdef"
# define HEXA_MAJ "0123456789ABCDEF"

size_t	ft_strlen(const char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(const char *str);
int		ft_printf(const char *string, ...);
int		print_arg(char *str, va_list argptr);
int		print_char(char c);
int		print_str(char *str);
int		print_ptr(void *ptr);
int		print_dec(int dec);
int		print_int(int nbr);
int		print_hexam(long nbr);
int		print_hexama(long nbr);
int		print_unsint(unsigned int nbr);
int		count_nbr(int nbr);

#endif