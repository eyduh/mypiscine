/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: areintha <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/17 13:50:29 by areintha      #+#    #+#                 */
/*   Updated: 2021/06/17 17:13:25 by areintha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	r ;

	if (str[0] == '\0')
		r = 1 ;
	else
	{
		while (*str)
		{
			if (*str >= '0' && *str <= '9')
				r = 1;
			else
				r = 0;
			str++ ;
		}
	}
	return (r);
}
