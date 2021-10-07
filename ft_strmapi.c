#include "Libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*out;
	unsigned int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	out = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!out)
		return (NULL);
	while (s[i])
	{
		out[i] = f(i, s[i]);
		i++;
	}
	out[i] = 0;
	return (out);
}
