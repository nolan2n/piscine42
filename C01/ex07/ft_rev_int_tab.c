#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
    }
    if (nb >= 10 )
         ft_putnbr(nb / 10);
    ft_putchar((nb  % 10) + '0');
}

void    ft_rev_int_tab(int *tab, int size)
{
    int     i;

    i = 0;
    if (size > 1)
        ft_rev_int_tab(tab + (i + 1), size - 1);
    ft_putnbr(*(tab + i));
}

int main(void)
{
    int test[5] = {1, 20, 3, 4, 5};

    ft_rev_int_tab(test, 5);
    return (0);
}