#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    top(int x)
{
    int a;

    a = x;
    while(a > 0)
    {
        if(x - a == 0 || x - a == x - 1)
            ft_putchar('A');
        else
            ft_putchar('B');
        a--;    
    }
}

void    bottom(int x)
{
    int a;

    a = x;
    while(a > 0)
    {
        if(x - a == 0 || x - a == x - 1)
            ft_putchar('C');
        else
            ft_putchar('B');
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
            ft_putchar('B');
        else
            ft_putchar(' ');
        a--;    
    }
}

void    rush02(int x, int y)
{
    int b;

    b = y;
    while(b > 0)
    {
        if(y - b == 0)
            top(x);
        else if(y - b == y - 1)
            bottom(x);
        else
            mid(x);
        ft_putchar('\n');
        b--;
    }
}

int main(void)
{
    rush02(5, 3);
    return(0);
}