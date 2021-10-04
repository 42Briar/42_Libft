#include <stddef.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *out;
	int i;

	out = (char *)malloc(len+1);
	i = 0;
	while (len-- > 0)
	{
		out[i++] = s[start++];
	}
	return (out);
}
