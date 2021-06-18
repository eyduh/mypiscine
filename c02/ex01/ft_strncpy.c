/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: areintha <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/14 18:43:00 by areintha      #+#    #+#                 */
/*   Updated: 2021/06/17 14:58:11 by areintha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i ;

	i = 0 ;
	while (src[i])
	{
		dest[i] = src[i];
		i++ ;
	}
	while (i < n)
	{
		dest[i] = '\0' ;
		i++ ;
	}
	return (dest);
}
