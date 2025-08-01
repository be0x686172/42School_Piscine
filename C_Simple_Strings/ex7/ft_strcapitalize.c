/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abderahmane.behar-rahala <abderahmane.beh  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 11:17:21 by abderahmane.b     #+#    #+#             */
/*   Updated: 2025/08/01 11:52:29 by abderahmane.b    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	while (str[i])
	{
		if (str[i] == ' ')
			str[i] -= 32;
		i++;
	}
}

int	main(void)
{
	printf("%c", %ft_strcapitalize("Salut je suis le meilleur !"));
	return (0);
}
