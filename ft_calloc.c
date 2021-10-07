#include "Libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*out;

	out = (void *)malloc(n * size);
	if (out == NULL)
		return (NULL);
	ft_memset(out, 0, n * size);
	return (out);
}
