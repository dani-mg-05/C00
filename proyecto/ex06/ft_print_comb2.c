/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:18:56 by damedina          #+#    #+#             */
/*   Updated: 2023/07/12 12:44:21 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	mostrar_numeros(int a, int b)
{
	char	ca;
	char	cb;

	ca = (a / 10) + '0';
	write(1, &ca, 1);
	ca = (a % 10) + '0';
	write(1, &ca, 1);
	write(1, " ", 1);
	cb = (b / 10) + '0';
	write(1, &cb, 1);
	cb = (b % 10) + '0';
	write(1, &cb, 1);
	if (!(a == 98 && b == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			mostrar_numeros(a, b);
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/
