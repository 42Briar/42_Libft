#include "Libft.h"

static int	wordlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

static int	wordsnum(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if ((s[i] == c && s[i]) && (s[i + 1] != c))
			words++;
		i++;
	}
	return (++words);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**out;

	i = 0;
	k = 0;
	out = (char **)malloc(sizeof(char *) * (wordsnum(s, c) + 1));
	if (!out)
		return (NULL);
	while (s[i] == c)
		i++;
	while (s[i])
	{
		j = 0;
		out[k] = (char *)malloc(sizeof(char) * (wordlen(&s[i], c) + 1));
		if (!out[k])
			return (NULL);
		while (s[i] != c && s[i])
			out[k][j++] = s[i++];
		while (s[i] == c)
			i++;
		out[k++][j] = 0;
	}
	out[k] = NULL;
	return (out);
}
