#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while(*(str + i))
        i++;
    return (i);
}

int     check_base(char *str)
{
    int     i;
    int     j;

    i = 0;
    if (*(str + 0) == '\0' || *(str + 1) == '\0')
        return (0);
    while(*(str + i))
    {
        if(*(str + i) == '-' || *(str + i) == '+')
            return (0);
        j = i + 1;
        while (*(str + j))
        {
            if (*(str + i) == *(str + j))
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

void    ft_putnbr_base(int nbr, char *base)
{
    int     BaseLen;
    long    l;

    l = nbr;
    BaseLen = ft_strlen(base);
    if(!check_base(base))
        return;
    if (nbr < 0)
    {
        nbr *= -1;
        ft_putchar('-');
    }
    if (nbr >= BaseLen)
        ft_putnbr_base((nbr / BaseLen), base);
    ft_putchar(*(base + (nbr % BaseLen)));
}

int main(void)
{
    char    *test = "01";
    ft_putnbr_base(-123, test);
    return (0);
}