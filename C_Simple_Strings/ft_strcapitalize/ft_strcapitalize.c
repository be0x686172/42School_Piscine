/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abderahmane.behar-rahala <abderahmane.beh  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 09:54:32 by abderahmane.b     #+#    #+#             */
/*   Updated: 2025/08/06 18:35:27 by abderahmane.b    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& (str[i - 1] < 65 || str[i - 1] > 90)
			&& (str[i - 1] < 97 || str[i - 1] > 122)
			&& (str[i - 1] < 48 || str[i - 1] > 57))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[] = "salut les 42gars ! le+a+plus;;;:'adewq?qeweq(q)";

	printf("\n%s \n", ft_strcapitalize(str));
	return (0);
}
*/
