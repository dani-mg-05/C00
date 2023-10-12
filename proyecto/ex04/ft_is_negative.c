/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:24:13 by damedina          #+#    #+#             */
/*   Updated: 2023/07/05 19:18:54 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Función que devuelve "N" si n es negativo y "P" si es positivo o nulo
void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(5);
	return (0);
}
*/
