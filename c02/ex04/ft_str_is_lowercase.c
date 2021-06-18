/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: areintha <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/17 14:04:25 by areintha      #+#    #+#                 */
/*   Updated: 2021/06/17 14:15:06 by areintha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	char	r ;

	if (str[0] == '\0')
		r = '1' ;
	else
	{
		while (*str)
		{
			if (*str >= 'a' && *str <= 'z')
				r = '0';
			else
				r = '1';
			str++ ;
		}
	}
	return (r);
}
