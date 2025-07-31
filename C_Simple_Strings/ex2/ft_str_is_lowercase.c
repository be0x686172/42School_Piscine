/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abderahmane.behar-rahala <abderahmane.beh  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 15:55:56 by abderahmane.b     #+#    #+#             */
/*   Updated: 2025/07/31 16:00:45 by abderahmane.b    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_alphabet_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return  (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{	
		if (!ft_alphabet_lowercase(str[i]))
			return (0);
		else
			i++;
	}
	return (1);
}
