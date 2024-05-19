/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptheo <ptheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:00:24 by ptheo             #+#    #+#             */
/*   Updated: 2024/04/21 19:00:25 by ptheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	print_char(char c)
{
	ft_putchar(c);
	return (1);
}

int	print_str(char *str)
{
	ft_putstr(str);
	return (ft_strlen(str));
}

int	print_ptr(void *ptr)
{
	unsigned int	nbr;

	nbr = (unsigned long)ptr;
	return (print_hexam(nbr));
}

int	print_dec(int dec)
{
	ft_putnbr(dec);
	return (count_nbr(dec));
}

int	print_int(int nbr)
{
	ft_putnbr(nbr);
	return (count_nbr(nbr));
}
