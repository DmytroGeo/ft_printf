/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:33:51 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/11/28 16:24:57 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		n;
	int		count;
	va_list	args;

	va_start(args, str);
	n = 0;
	count = 0;
	while (str[n] != '\0')
	{
		if (str[n] == '%')
		{
			n++;
			ft_convert(str[n], args, &count);
		}
		else
			ft_putchar_fd(str[n], 1, &count);
		n++;
	}
	va_end(args);
	return (count);
}
