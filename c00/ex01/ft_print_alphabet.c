/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:10:56 by kmahdi            #+#    #+#             */
/*   Updated: 2023/05/06 23:53:53 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	character;

	character = 'a';
	while (character != 'z')
	{
		ft_putchar(character);
		character++;
	}
	ft_putchar('z');
}

int	main(void)
{
	ft_print_alphabet();
}
