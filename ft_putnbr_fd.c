/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:01:37 by tcajee            #+#    #+#             */
/*   Updated: 2019/06/06 17:49:16 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
    int  x;

    x = n;
    if (n == 2147483647)
        ft_putstr_fd("2147483647", fd);
    else if (n == -2147483648)
        ft_putstr_fd("-2147483648", fd);
    else if (n < 0)
        ft_putchar_fd('-', fd);
    else if (x > 9)
    {
        ft_putnbr_fd(x / 10, fd);
        ft_putnbr_fd(x % 10, fd);
    }
    else
        ft_putchar_fd(x + 48, fd);
}
