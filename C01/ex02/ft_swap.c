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
    int     c;
    int     d;

    c = 4;
    d = 5;
    printf ("before :\n a = %d\n b = %d\n", c, d);
    ft_swap(&c, &d);
    printf ("after :\n a = %d\n b = %d\n", c, d);
    return(0);
}