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
        if(x - a == 0)
            ft_putchar('/');
        else if(x - a == x - 1)
            ft_putchar('\\');
        else
            ft_putchar('*');
        a--;    
    }
}

void    bottom(int x)
{
    int a;

    a = x;
    while(a > 0)
    {
        if(x - a == 0)
            ft_putchar('\\');
        else if(x - a == x - 1)
            ft_putchar('/');
        else
            ft_putchar('*');
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
            ft_putchar('*');
        else
            ft_putchar(' ');
        a--;    
    }
}

void    rush01(int x, int y)
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
    rush01(4, 4);
    return(0);
}