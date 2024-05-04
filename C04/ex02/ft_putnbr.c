#include <unistd.h>
void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    long l;

    l = nb;
    if (l < 0)
    {
        ft_putchar('-');
        l *= -1;
    }
    if (l >= 10 )
         ft_putnbr(l / 10);
    ft_putchar((l  % 10) + '0');
}

int     main(void)
{
    ft_putnbr(-42315602);
    return (0);
}