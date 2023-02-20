/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:01:38 by kefernan          #+#    #+#             */
/*   Updated: 2022/06/29 16:07:12 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_printf(const char *str, ...);

int	ft_flags(const char *s, int i, va_list arg);

int	ft_sputchar(char c);

int	ft_sputstr(char *s);

int	ft_sputnbr(int n);

int	ft_sputunbr(unsigned int u);

char	*ft_toui(unsigned int u);

int	ft_puthex(unsigned int n, char k);

int	ft_putptr(void *n);

#endif
