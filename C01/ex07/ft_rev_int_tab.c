#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_rev_int_tab(int *tab, int size)
{
    int     i;

    i = 0;
    if (size > 1)
        ft_rev_int_tab(tab + (i + 1), size - 1);
    ft_putchar(*(tab + i) + '0');
}

int main(void)
{
    int test[5] = {1, 2, 3, 4, 5};

    ft_rev_int_tab(test, 5);
    return (0);
}