/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:02:09 by damedina          #+#    #+#             */
/*   Updated: 2023/07/05 19:10:31 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Función que muestra el alfabeto en minúsculas en una sola línea
void	ft_print_alphabet(void)
{
	char	letra;

	letra = 'a';
	while (letra <= 'z')
	{
		write(1, &letra, 1);
		letra++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
