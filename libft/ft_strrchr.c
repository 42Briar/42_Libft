#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{	
		i--;
		*s++;
	}
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (*s == c)
			return (*s);
		*s++;
		i--;
	}
	return (NULL);
}
