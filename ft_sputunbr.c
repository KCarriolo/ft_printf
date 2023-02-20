/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sputunbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:48:27 by kefernan          #+#    #+#             */
/*   Updated: 2022/07/01 14:24:38 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_sputunbr(unsigned int u)
{
	char	*str;
	int		len;

	str = ft_toui(u);
	len = ft_sputstr(str);
	free(str);
	return (len);
}

/*#include <stdio.h>

int	main(void)
{
	unsigned int	u;
	int				j;

	u = 345;
	j = ft_sputunbr(u);
	printf("\n%i\n", j);
	return (0);
}*/
