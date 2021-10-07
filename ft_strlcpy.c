#include "Libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	while (*src != 0 && i < (size - 1))
	{
		*dst++ = *src++;
		i++;
	}
	*dst = 0;
	return (srclen);
}
