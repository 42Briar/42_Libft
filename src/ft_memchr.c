#include "libft.h"

void	*ft_memchr(void *buf, int c, size_t len)
{
	unsigned char	*mem;

	mem = buf;
	while (len > 0)
	{
		if (*mem == c)
			return (*mem);
		*mem++;
	}
	return (NULL);
}
