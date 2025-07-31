/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abderahmane.behar-rahala <abderahmane.beh  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:01:53 by abderahmane.b     #+#    #+#             */
/*   Updated: 2025/07/31 16:02:24 by abderahmane.b    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_alphabet_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return  (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{	
		if (!ft_alphabet_uppercase(str[i]))
			return (0);
		else
			i++;
	}
	return (1);
}
