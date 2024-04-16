/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryozuno <ryozuno@42Tokyo>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 18:45:32 by ryozuno           #+#    #+#             */
/*   Updated: 2024/02/06 14:51:47 by ryozuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	int	count;

	count = 0;
	count = write(1, &c, 1);
	return (count);
}

int	ft_write(char spec, va_list ptr)
{
	int	count;

	count = 0;
	if (spec == 'c')
		count = ft_putchar(va_arg(ptr, int));
	else if (spec == 's')
		count = ft_putstr(va_arg(ptr, char *));
	else if (spec == 'd' || spec == 'i')
		count = ft_int(ptr);
	else if (spec == 'x')
		count = ft_hexlower(ptr);
	else if (spec == 'X')
		count = ft_hexupper(ptr);
	else if (spec == 'u')
		count = ft_unsigned_int(ptr);
	else if (spec == 'p')
		count = ft_pointer(ptr);
	else
		count = write(1, &spec, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ptr;
	int		count;

	count = 0;
	va_start(ptr, format);
	while (*format)
	{
		if (*format == '%')
			count += ft_write(*(++format), ptr);
		else
			count += write(1, *(&format), 1);
		format++;
	}
	va_end(ptr);
	return (count);
}
