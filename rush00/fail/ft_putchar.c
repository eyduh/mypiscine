/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: areintha <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/03 20:39:44 by areintha      #+#    #+#                 */
/*   Updated: 2021/06/07 15:04:30 by areintha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

int	main(void)
{
	ft_putchar('c');
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
