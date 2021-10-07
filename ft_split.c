#include "Libft.h"

static int	count_word(char const *s, char c)
{
	int	words;

	words = 0;
	while (*s)
	{
		if (*s == c || *s == 0)
			words++;
		s++;
	}
	words++;
	return (words);
}

static int	word_length(char const *s, char c)
{
	int	word;

	word = 0;
	while (*s != c && *s)
	{
		word++;
		s++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	int		words;
	int		i;
	int		j;

	i = 0;
	if (!s || !c)
		return (NULL);
	words = count_word(s, c);
	out = (char **)malloc(sizeof(char *) * (words + 1));
	if (!out)
		return (NULL);
	while (i < words)
	{
		j = 0;
		while (*s == c && *s)
			s++;
		out[i] = (char *)malloc(sizeof(char) * (word_length(s, c) + 1));
		while (*s != c && *s)
			out[i][j++] = *s++;
		out[i++][j] = 0;
	}
	out[i] = 0;
	return (out);
}
