/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:43:12 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/11/28 14:44:49 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthex2_fd(long int n, int fd, int *count)
{
	long int	l;

	l = n;
	if (l >= 16)
	{
		ft_puthex2_fd(l / 16, fd, count);
		if ((l % 16) >= 10)
			ft_putchar_fd((l % 16) + 87, fd, count);
		else
			ft_putchar_fd((l % 16) + 48, fd, count); 
	}
	else if (l >= 10)
		ft_putchar_fd(l + 87, fd, count);
	else
		ft_putchar_fd(l + 48, fd, count);
}

void	ft_putptr_fd(void *ptr, int fd, int *count)
{
	long int	l;

	l = (long int)ptr;
	if (ptr == 0)
		ft_putstr_fd("(nil)", fd, count);
	else 
	{
		ft_putstr_fd("0x", fd, count);
		ft_puthex2_fd(l , fd, count);
	}
}