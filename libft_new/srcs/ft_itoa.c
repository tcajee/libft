/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:38:25 by tcajee            #+#    #+#             */
/*   Updated: 2019/08/16 11:56:21 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

char	*ft_itoa(int n)
{
	char	out[12];
	char	*new;
	int		x;
	size_t	i;

	FT_(n == -2147483648, ft_strdup("-2147483648"));
	_FT(n == 0, ft_strdup("0"));
	_F(n < 0, x = n * -1);
	_(x = n);
	i = 0;
	while (x > 0)
	{
		out[i++] = (x % 10) + 48;
		x /= 10;
	}
	F_(n < 0, out[i++] = '-');
	F_(i <= 12, out[i] = '\0');
	return (new = ft_strcpy(ft_strnew(ft_strlen(out)), ft_strrev(out)));
}
