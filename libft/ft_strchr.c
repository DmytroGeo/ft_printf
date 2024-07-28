/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:13:51 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/07/08 15:51:12 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			n;
	unsigned char	uc;
	char			*str;

	str = (char *)s;
	n = 0;
	uc = (unsigned char)c;
	if (uc == '\0')
		return (str + ft_strlen(str));
	else
	{
		while (str[n] != '\0')
		{
			if (str[n] == uc)
				return (str + n);
			n++;
		}
		return (NULL);
	}
}
