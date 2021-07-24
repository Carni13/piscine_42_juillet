/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 19:09:44 by jremy             #+#    #+#             */
/*   Updated: 2021/07/02 09:51:00 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(int num)
{
	char	a;
	char	b;

	a = num / 10 + '0';
	b = num % 10 + '0';
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int		num1;
	int		num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_print_number(num1);
			write(1, " ", 1);
			ft_print_number(num2);
			if (num1 != 98)
				write(1, ", ", 2);
			num2++;
		}
		num1++;
	}
}
