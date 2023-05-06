/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:47:30 by kmahdi            #+#    #+#             */
/*   Updated: 2023/05/06 23:59:41 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	nbr;

	nbr = '0';
	while (nbr != '9')
		ft_putchar(nbr++);
	ft_putchar('9');
}

 int	main(void)
 {
	ft_print_numbers();
 }
 