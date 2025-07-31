/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abderahmane.behar-rahala <abderahmane.beh  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 13:15:14 by abderahmane.b     #+#    #+#             */
/*   Updated: 2025/07/31 15:20:35 by abderahmane.b    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_alphabet(char c)
{
	if (c >= 'a' && c <= 'z')
		return  (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;



	i = 0;
	while (str[i])
	{	
		if (!ft_alphabet(str[i]))
			return (0);
		else
			i++;
	}
	return (1);
}
