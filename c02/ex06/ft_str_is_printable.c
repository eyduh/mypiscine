/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: areintha <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/17 14:15:58 by areintha      #+#    #+#                 */
/*   Updated: 2021/06/17 14:37:55 by areintha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	if (str[0] == '\0')
		return (1);
	else
	{
		while (*str)
		{
			if (*str < 32 && *str > 126)
				return (1);
			str++ ;
		}
	}
	return (0);
}
