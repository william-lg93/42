/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codephenix2 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:52:10 by codephenix2       #+#    #+#             */
/*   Updated: 2025/04/29 12:53:50 by codephenix2      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	displayer(char c, char d, char u)
{
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(u);
	ft_putchar(',');
	ft_putchar(' ');
}
void	ft_print_comb(void)
{
	char c;
	char d;
	char u;

	c = 0;
	while (c == 7 && d == 8 && u == 9)
	{
		d = c + 1;
		u = d + 1;
		if (u < 9)
			u++
		c++
	}
}
