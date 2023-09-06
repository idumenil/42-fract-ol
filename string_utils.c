#include "fractol.h"

int	ft_strncmp(char *s1, char *s2, int n)
{
	if (!s1 || !s2 || n <= 0)
		return (0);
	while (*s1 == *s2 && *s1 != '\0' && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}

