#include "Libft.h"

void	*ft_memchr(void *buf, int c, size_t len)
{
	unsigned char	*mem;
	size_t			i;

	i = 0;
	mem = buf;
	while (i < len)
	{
		if (*mem == (unsigned char)c)
			return (mem);
		i++;
		mem++;
	}
	return (NULL);
}
