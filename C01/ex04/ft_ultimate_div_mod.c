#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int     div;
    int     mod;

    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}

int     main(void)
{
    int     c;
    int     d;

    c = 12;
    d = 4;
    ft_ultimate_div_mod(&c, &d);
    printf ("div = %d\nmod = %d\n", c, d);
    return(0);
}