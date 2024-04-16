/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryozuno <ryozuno@42Tokyo>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:13:55 by ryozuno           #+#    #+#             */
/*   Updated: 2024/01/06 19:39:22 by ryozuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	count;

	count = 0;
	if (s == '\0')
		return (write(1, "(null)", 6));
	while (*s)
	{
		count += ft_putchar(*s);
		s++;
	}
	return (count);
}
