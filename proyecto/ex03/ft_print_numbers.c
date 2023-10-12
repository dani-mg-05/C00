/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:17:44 by damedina          #+#    #+#             */
/*   Updated: 2023/07/05 19:16:08 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Función que muestra todos los digitos en orden creciente en una sola línea
void	ft_print_numbers(void)
{
	char	digito;

	digito = '0';
	while (digito <= '9')
	{
		write(1, &digito, 1);
		digito++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
