#include "libft.h"

void	ft_strclr(char *s)
{
	size_t i;
	
	i = 0;
	if (!s)
		return;
	while (i < ft_strlen(s))
	{
		s[i] = '\0';
		i++;
	}
}