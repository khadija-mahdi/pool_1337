/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:30:06 by kmahdi            #+#    #+#             */
/*   Updated: 2023/05/06 23:55:34 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	character;

	character = 'z';
	while (character != 'a')
	{
		ft_putchar(character);
		character--;
	}
	ft_putchar('a');
}

int	main(void)
{
	ft_print_reverse_alphabet();
}
