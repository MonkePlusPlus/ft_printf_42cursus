/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptheo <ptheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:47:35 by ptheo             #+#    #+#             */
/*   Updated: 2024/04/02 15:47:36 by ptheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbr_2(long nbr)
{
	char	c;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr_2(nbr / 10);
		c = (nbr % 10) + '0';
		write(1, &c, 1);
	}
	else
	{
		c = (nbr % 10) + '0';
		write(1, &c, 1);
	}
}

void	ft_putnbr(int n)
{
	ft_putnbr_2(n);
}
