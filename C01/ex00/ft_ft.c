#include <stdio.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
}

int     main(void)
{
    int     a;
    int     *p;
    
    a = 28;
    printf ("before dereferencing : %d\n", a);
    p = &a;
    ft_ft(p);
    printf ("after dereferencing : %d\n", a);
}