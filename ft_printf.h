/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryozuno <ryozuno@42Tokyo>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:16:39 by ryozuno           #+#    #+#             */
/*   Updated: 2023/12/21 19:31:41 by ryozuno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(int c);
int		ft_putstr(char *s);
int		ft_putnbr(unsigned long long n, char const *base);
size_t	ft_strlen(const char *str);
int		ft_hexlower(va_list ptr);
int		ft_hexupper(va_list ptr);
int		ft_int(va_list ptr);
int		ft_pointer(va_list ptr);
int		ft_unsigned_int(va_list ptr);
#endif
