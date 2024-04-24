#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int     main(void)
{
    int     a;
    int     b;
    int     div;
    int     mod;

    a = 12;
    b = 3;
    div = 4;
    mod = 4;
    ft_div_mod(a, b, &div, &mod);
    printf("div = %d\nmod = %d\n", div, mod);
    return(0);
}