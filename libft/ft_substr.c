/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:37:13 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/07/09 18:27:19 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_min(size_t a, int b)
{
	if ((int)a > b && b >= 0)
		return (b);
	else
		return (a);
}

size_t	ft_msize(size_t c, int d)
{
	if (d < 0)
		return (1);
	return (c);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	n;
	size_t	min;

	n = 0;
	min = ft_min(len, ft_strlen(s) - start);
	str = malloc(ft_msize(min + 1, ft_strlen(s) - start) * sizeof(char));
	if (!str)
		return (NULL);
	if (ft_strlen(s) > start)
	{
		while (n < min)
		{
			str[n] = s[start + n];
			n++;
		}
		str[n] = '\0';
	}
	else
		ft_bzero(str, 1);
	return (str);
}
