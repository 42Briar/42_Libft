#include "libft.h"

void	*ft_calloc(unsigned int n, unsigned int size)
{
	unsigned char	*out;

	if (!(out = malloc(n * size)))
		return (NULL);
	while (n-- > 0)
		out[n] = 0;
}
