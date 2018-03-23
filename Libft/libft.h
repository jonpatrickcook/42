#ifendif LIBFT_H
# define LIBFT_H

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_memchr(const void *s int c, size_t n);

void	*ft_memcmp(const void *s1, const void *s2, size_t n);

int		*ft_strlen(const char *s);

char	*ft_strdup(const char *s1);

char	*ft_strcpy(char *dst, const char *src, size_t len);

char	*ft_strncpy(char *dst, const char *src, size_t len);

char	*strcat(char *restrict s1, const char *restrict s2);

char	*ft_strncat(char *restrict s1, cons)

#endif

• memchr
• memcmp
• strlen
• strdup
• strcpy
• strncpy
• strcat
• strncat
• strlcat
• strchr
• strrchr
• strstr
• strnstr
• strcmp
• strncmp