#include <stdlib.h>
#include <stdio.h>

int  *ft_range(int min, int max)
{
    int     *tab;
    int     i;

    i = 0;
    if (min >= max)
        return NULL;
    tab = (int *)malloc(sizeof(int) * (max - min));
    while(min < max)
        *(tab + i++) = min++;
    return (tab);
}

int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
		printf("{%d}", tab[i++]);
    free(tab);
}