/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:43:00 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/07/08 15:56:43 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	unsigned char	uc;
	int				n;

	str = (char *)s;
	uc = (unsigned char)c;
	n = ft_strlen(str) - 1;
	if (uc == '\0')
		return (str + n + 1);
	else
	{
		while (n != -1)
		{
			if (str[n] == uc)
				return (str + n);
			n--;
		}
		return (NULL);
	}
}
