/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:20:34 by dgeorgiy          #+#    #+#             */
/*   Updated: 2024/11/27 15:29:57 by dgeorgiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTH_H
# define FT_PRINTF_H

#include "./libft/libft.h"
#include <stdarg.h>

int	ft_printf(const char *str, ...);
void	ft_convert(char c, va_list args, int *count);

#endif
