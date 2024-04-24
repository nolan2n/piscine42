#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int     swap;
    
    swap = *b;
    *b = *a;
    *a = swap;
}

int     main(void)
{
    int     a;
    int     b;

    a = 4;
    b = 5;
    printf ("before :\n a = %d\n b = %d\n", a, b);
    ft_swap(&a, &b);
    printf ("after :\n a = %d\n b = %d\n", a, b);
}