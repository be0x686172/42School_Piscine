/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abderahmane.behar-rahala <abderahmane.beh  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 08:26:17 by abderahmane.b     #+#    #+#             */
/*   Updated: 2025/07/29 03:33:31 by abderahmane.b    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_array(char *array, int n)
{
	int	i;
	int	is_last;

	i = 0;
	is_last = 1;
	while (i < n)
	{
		if (array[i] != 10 - n + i)
		{
			is_last = 0;
			break ;
		}
		i++;
	}
	i = 0;
	while (i < n)
	{
		ft_putchar(array[i] + '0');
		i++;
	}
	if (!is_last)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_update_combn(char *array, int n)
{
	int	i;

	while (1)
	{
		ft_print_array(array, n);
		i = n - 1;
		while (i >= 0 && array[i] == 10 - n + i)
			i--;
		if (i < 0)
			break ;
		array[i]++;
		while (++i < n)
			array[i] = array[i - 1] + 1;
	}
}

void	ft_print_combn(int n)
{
	char	array[10];
	int		i;

	if (n <= 0 || n >= 10)
		return ;
	i = 0;
	while (i < n)
	{
		array[i] = i;
		i++;
	}
	ft_update_combn(array, n);
}
