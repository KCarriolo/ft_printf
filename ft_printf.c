/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:27:41 by kefernan          #+#    #+#             */
/*   Updated: 2022/07/04 09:40:30 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int			i;
	int			r;
	va_list		argl;

	va_start(argl, str);
	i = 0;
	r = 0;
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
		{
			r += ft_flags(str, i, argl);
			i += 2;
		}
		else
		{
			r += ft_sputchar(str[i]);
			i++;
		}
	}
	va_end(argl);
	return (r);
}
