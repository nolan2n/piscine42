#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    top_and_bottom(int x)
{
    int a;

    a = x;
    while(a > 0)
    {
        if(x - a == 0 || x - a == x - 1)
            ft_putchar('o');
        else
            ft_putchar('-');
        a--;    
    }
}

void    mid(int x)
{
    int a;

    a = x;
    while(a > 0)
    {
        if(x - a == 0 || x - a == x - 1)
            ft_putchar('|');
        else
            ft_putchar(' ');
        a--;    
    }
}

void    rush00(int x, int y)
{
    int b;

    b = y;
    while(b > 0)
    {
        if(y - b == 0 || y - b == y - 1)
            top_and_bottom(x);
        else
            mid(x);
        ft_putchar('\n');
        b--;
    }
}

int main(void)
{
    rush00(5, 3);
    return(0);
}