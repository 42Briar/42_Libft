/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pvan-dij <pvan-dij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/08 12:18:41 by pvan-dij      #+#    #+#                 */
/*   Updated: 2021/10/08 12:22:02 by pvan-dij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int c, size_t len)
{
	unsigned char	*dest;
	int				i;

	i = 0;
	dest = dst;
	while (len > 0)
	{
		dest[i++] = c;
		len--;
	}
	return (dest);
}
