/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:12:30 by damedina          #+#    #+#             */
/*   Updated: 2023/07/05 19:13:09 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Función que muestra el alfabeto inverso en minúsculas en una sola línea
void	ft_print_reverse_alphabet(void)
{
	char	letra;

	letra = 'z';
	while (letra >= 'a')
	{
		write(1, &letra, 1);
		letra--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
