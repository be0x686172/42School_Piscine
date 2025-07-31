/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abderahmane.behar-rahala <abderahmane.beh  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 03:42:22 by abderahmane.b     #+#    #+#             */
/*   Updated: 2025/07/31 04:10:42 by abderahmane.b    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	temp;

	count = 0;
	while (count < size / 2)
	{
		temp = tab[count];
		tab[count] = tab[size - (count + 1)];
		tab[size - (count + 1)] = temp;
		count++;
	}
}
