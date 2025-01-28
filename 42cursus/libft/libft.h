#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t num);
void	*ft_memmove(void *dest, const void *src, size_t num);
void	*ft_memset(void *ptr, int c, size_t num);
void	ft_bzero(void *ptr, size_t n);
void	*ft_calloc(size_t items, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t num);
void	*ft_memmove(void *dest, const void *src, size_t num);
void	*ft_memset(void *ptr, int c, size_t num);
void	*ft_memchr(const void *ptr, int ch, size_t count);
int		ft_atoi(const char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int ch);
int		ft_toupper(int ch);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
int		ft_strlen(char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *lit, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *str1);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dest, char *src, size_t size);
size_t	ft_strlcpy(char *dest, char *src, size_t size);

#endif