/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: areintha <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/17 14:13:36 by areintha      #+#    #+#                 */
/*   Updated: 2021/06/17 14:31:22 by areintha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	char	r ;

	if (str[0] == '\0')
		r = '1' ;
	else
	{
		while (*str)
		{
			if (*str >= 'A' && *str <= 'Z')
				r = '0';
			else
				r = '1';
			str++ ;
		}
	}
	return (r);
}
