#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(tab = (int *)malloc(sizeof(int) * (max - min))))
		return (-1);
	i = 0;
	while (min < max)
		*(tab + i++) = min++;
	*range = tab;
	return (i);
}

int	main(void)
{
	int		*test;
	printf(":%d:\n", ft_ultimate_range(&test, 5, 10));
	return (0);
}