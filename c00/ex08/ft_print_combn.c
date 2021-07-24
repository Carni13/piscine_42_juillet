/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcombn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 07:40:48 by jremy             #+#    #+#             */
/*   Updated: 2021/07/02 10:17:58 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_recu(int n, char *array, int start, int depth)
{
	int		counter;

	counter = start;
	if (depth == 0)
	{
		write(1, array, n);
		if (array[0] != '9' + 1 - n)
			write(1, ", ", 2);
		return ;
	}
	while (counter <= 10 - depth)
	{
		array[n - depth] = counter + '0';
		ft_recu(n, array, counter + 1, depth - 1);
		counter++;
	}
}

void	ft_print_combn(int n)
{
	char	array[9];

	if (n < 1 || n > 10)
		return ;
	ft_recu(n, array, 0, n);
}
