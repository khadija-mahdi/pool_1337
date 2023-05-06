/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:22:19 by kmahdi            #+#    #+#             */
/*   Updated: 2022/06/24 23:21:47 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			k = i;
			j = 0;
			while (to_find[j] != '\0' && str[k] != '\0' && str[k] == to_find[j])
			{
				j++;
				k++;
			}
			if (to_find[j] == '\0' && to_find[j - 1] == str[k - 1])
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
