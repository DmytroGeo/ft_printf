/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:07:00 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/07/08 15:48:46 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			k;
	unsigned char	uc;
	unsigned char	*str;

	k = 0;
	str = (unsigned char *)s;
	uc = (unsigned char)c;
	while (k < n)
	{
		if (str[k] == uc)
			return (str + k);
		k++;
	}
	return (NULL);
}
