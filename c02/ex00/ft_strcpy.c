/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: areintha <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/11 14:36:27 by areintha      #+#    #+#                 */
/*   Updated: 2021/06/17 14:58:41 by areintha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	loopdeloop ;

	loopdeloop = 0 ;
	while (src[loopdeloop])
	{
		dest[loopdeloop] = src[loopdeloop];
		loopdeloop++ ;
	}
	dest[loopdeloop] = '\0' ;
	return (dest);
}
