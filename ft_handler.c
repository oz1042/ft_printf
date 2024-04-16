/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryozuno <ryozuno@42Tokyo>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:05:40 by ryozuno           #+#    #+#             */
/*   Updated: 2024/02/06 14:51:25 by ryozuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlower(va_list ptr)
{
	unsigned int	nbr;

	nbr = va_arg(ptr, unsigned int);
	return (ft_putnbr(nbr, "0123456789abcdef"));
}

int	ft_hexupper(va_list ptr)
{
	unsigned int	nbr;

	nbr = va_arg(ptr, unsigned int);
	return (ft_putnbr(nbr, "0123456789ABCDEF"));
}

int	ft_int(va_list ptr)
{
	long long	nbr;

	nbr = va_arg(ptr, int);
	if (nbr < 0)
	{
		write(1, "-", 1);
		return (ft_putnbr(-nbr, "0123456789") + 1);
	}
	return (ft_putnbr(nbr, "0123456789"));
}

int	ft_unsigned_int(va_list ptr)
{
	unsigned int	nbr;

	nbr = va_arg(ptr, unsigned int);
	return (ft_putnbr(nbr, "0123456789"));
}

int	ft_pointer(va_list ptr)
{
	void	*nbr;

	nbr = va_arg(ptr, void *);
	write(1, "0x", 2);
	return (ft_putnbr((unsigned long long)nbr, "0123456789abcdef") + 2);
}
