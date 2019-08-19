/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:04:43 by tcajee            #+#    #+#             */
/*   Updated: 2019/08/19 10:48:47 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	ln;

	F(s && (ln = ft_strlen(s)), ___(!ln++, F_(s[ln] == c, ((char *)&s[ln--]))));
	return (NULL);
}
