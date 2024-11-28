/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:15:16 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/11/28 16:35:55 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putuns_fd(unsigned int n, int fd, int *count)
{
	long int	l;

	l = n;
	if (l < 0)
	{
		ft_putchar_fd('-', fd, count);
		l *= -1;
	}
	if (l >= 10)
	{
		ft_putuns_fd(l / 10, fd, count);
		ft_putchar_fd((l % 10) + 48, fd, count);
	}
	else
		ft_putchar_fd(l + 48, fd, count);
}
