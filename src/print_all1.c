/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_all1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptheo <ptheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:00:24 by ptheo             #+#    #+#             */
/*   Updated: 2024/05/27 16:24:22 by ptheo            ###   ########.fr       */
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
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (1);
	}
	ft_putstr(str);
	return (ft_strlen(str));
}

int	print_ptr(void *ptr)
{
	unsigned long	nbr;

	nbr = (unsigned long)ptr;
	return (print_hexama(nbr));
}

int	print_dec(long dec)
{
	size_t	count;

	count = 0;
	if (dec < 0)
	{
		write(1, "-", 1);
		dec = -dec;
		count++;
	}
	count += ft_putnbr(dec);
	return (count);
}

int	print_int(long nbr)
{
	size_t	count;

	count = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
		count++;
	}
	count += ft_putnbr(nbr);
	return (count);
}
