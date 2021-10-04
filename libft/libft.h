#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
char	*ft_strchr(char *s, int c);
char	*ft_strdup(char *src);
int		ft_strlen(const char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strnstr(char *str, char *to_find, unsigned int len);
char	*ft_strrchr(char *s, int c);
void	*ft_memchr(void *buf, int c, unsigned int len);
int		ft_memcmp(const void *s1, const void *s2, unsigned int len);
void	*ft_memcpy(void *dst, const void *src, unsigned int len);
void	*ft_memmove(void *dst, const void *src, unsigned int len);     //incomplete
void	*ft_memset(void *dst, int c, unsigned int len);
void	ft_bzero(void *dst, unsigned int n);
void 	*ft_calloc(unsigned int n, unsigned int size);







#endif