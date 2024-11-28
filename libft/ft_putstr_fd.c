/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:29:15 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/11/28 16:50:58 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd, int *count)
{
	size_t	n;

	n = 0;
	if (s == NULL)
	{
		*count += write(fd, "(null)", 6);
		return ;
	}
	while (s[n])
	{
		ft_putchar_fd(s[n], fd, count);
		n++;
	}
}
