/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abderahmane.behar-rahala <abderahmane.beh  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:27:01 by abderahmane.b     #+#    #+#             */
/*   Updated: 2025/07/23 15:34:25 by abderahmane.b    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	l;

	l = 'z';
	while (l >= 'a')
	{
		write(1, &l, 1);
		l--;
	}
}
