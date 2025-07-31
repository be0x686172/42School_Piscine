/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abderahmane.behar-rahala <abderahmane.beh  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 03:52:48 by abderahmane.b     #+#    #+#             */
/*   Updated: 2025/07/31 03:56:09 by abderahmane.b    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	count;

	count = 0;
	while (count < (size - 1))
	{
		if (tab[count] > tab[count + 1])
		{
			i = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = i;
			count = 0;
		}
		else
			count++;
	}
}
