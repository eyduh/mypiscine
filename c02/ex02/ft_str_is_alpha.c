/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: areintha <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/17 12:22:13 by areintha      #+#    #+#                 */
/*   Updated: 2021/06/18 14:05:58 by areintha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	r ;

	if (str[0] == '\0')
		r = 1 ;
	else
	{
		while (*str)
		{
			if ((*str >= 'A' && *str <= 'Z') || \
				(*str >= 'a' && *str <= 'z'))
				r = 1;
			else
			{	
				r = 0;
				break ;
			}
			str++ ;
		}
	}
	return (r);
}
