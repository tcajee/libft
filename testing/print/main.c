/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcajee <tcajee@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 11:10:10 by tcajee            #+#    #+#             */
/*   Updated: 2019/08/19 16:39:48 by tcajee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	main()
{

	t_wins		wins;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &wins);

	/* printf("rows:		%hd\n", wins.ws_row); */
	/* printf("columns:	%hd\n", wins.ws_col); */
	/* printf("\033[1;31Hello world\nm;"); */

	printf("\033\1331;34m        HELLO WORLD\
			\e[0m           HELLO WORLD ");



	return (0);
}
