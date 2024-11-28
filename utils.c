/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:37:37 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/11/28 16:31:02 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convert(char c, va_list args, int *count)
{
	if (c == '%')
		ft_putchar_fd(c, 1, count);
	else if (c == 'c')
		ft_putchar_fd(va_arg(args, int), 1, count);
	else if (c == 'd' || c == 'i')
		ft_putnbr_fd(va_arg(args, int), 1, count);
	else if (c == 's')
		ft_putstr_fd(va_arg(args, char *), 1, count);
	else if (c == 'x')
		ft_puthex_fd(va_arg(args, unsigned int), 1, count);
	else if (c == 'X')
		ft_putchex_fd(va_arg(args, unsigned int), 1, count);
	else if (c == 'u')
		ft_putuns_fd(va_arg(args, unsigned int), 1, count);
	else if (c == 'p')
		ft_putptr_fd(va_arg(args, void *), 1, count);
}
