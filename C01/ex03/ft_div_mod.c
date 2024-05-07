#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int     main(void)
{
    int     c;
    int     d;
    int     div2;
    int     mod2;

    c = 12;
    d = 3;
    div2 = 4;
    mod2 = 4;
    ft_div_mod(c, d, &div2, &mod2);
    printf("div = %d\nmod = %d\n", div2, mod2);
    return(0);
}