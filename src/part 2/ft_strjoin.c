#include "Libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;


	out = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	ft_memmove(out, s1, ft_strlen(s1));
	ft_memmove(out + ft_strlen(s1), s2. ft_strlen(s2));
	out[ft_strlen(s1) + ft_strlen(s2) = 0];
	return out;
}