/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryozuno <ryozuno@42Tokyo>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:00:00 by ryozuno           #+#    #+#             */
/*   Updated: 2024/01/06 21:07:47 by ryozuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(unsigned long long n, char const *base)
{
	int					count;
	unsigned long long	base_len;

	base_len = ft_strlen(base);
	count = 0;
	if (n < base_len)
		count = ft_putchar(base[n]);
	else
	{
		count += ft_putnbr((n / base_len), base);
		count += ft_putnbr((n % base_len), base);
	}
	return (count);
}
