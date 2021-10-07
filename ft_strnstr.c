/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pvan-dij <pvan-dij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/12 16:45:29 by pvan-dij      #+#    #+#                 */
/*   Updated: 2021/10/06 20:34:08 by pvan-dij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little || !*little)
		return ((char *)big);
	while (big[i] != 0 && i < len - 1)
	{
		while (big[i + j] == little[j] && i + j < len)
		{
			if (little[++j] == 0)
				return ((&((char *)big)[i]));
		}
		j = 0;
		i++;
	}
	return (NULL);
}
