#include "Libft.h"

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
		return (s + (ft_strlen(s)));
	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
