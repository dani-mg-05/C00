/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:56:13 by damedina          #+#    #+#             */
/*   Updated: 2023/07/05 19:07:08 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Función que muestra el caracter c
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(void)
{
	ft_putchar('z');
	return (0);
}
*/
