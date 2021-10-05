#include "Libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	while (len > 0)
	{
		if (*str1++ != *str2++)
			return (*str1 - *str2);
	}
	return (0);
}
