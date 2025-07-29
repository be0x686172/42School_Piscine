/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abderahmane.behar-rahala <abderahmane.beh  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 08:58:07 by abderahmane.b     #+#    #+#             */
/*   Updated: 2025/07/24 17:30:53 by abderahmane.b    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb_continue(int a, int b, int c)
{
	if (a != 7 || b != 8 || c != 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;
	char	comb[3];

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				comb[0] = a + '0';
				comb[1] = b + '0';
				comb[2] = c + '0';
				write(1, comb, 3);
				ft_print_comb_continue(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
