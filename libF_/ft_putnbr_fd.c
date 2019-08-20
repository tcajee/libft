/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:01:37 by tcajee            #+#    #+#             */
/*   Updated: 2019/08/19 10:48:46 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		F_(n == -2147483648, ft_putstr_fd("-2147483648", fd));
		_(ft_putchar_fd('-', fd));
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	_F(ft_isdigit(n + 48), ft_putchar_fd(n + 48, fd));
}
