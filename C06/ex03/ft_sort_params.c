#include <unistd.h>

void    ft_putstr(char *str)
{
    while(*str)
        write (1, &*str++, 1);
    write (1, "\n", 1);
}

int     ft_strcmp(char *s1, char *s2)
{
    while(*s2 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return(*s1 - *s2);
}

void    ft_swap(char **a, char **b)
{
    char     *swap;

    swap = *a;
    *a = *b;
    *b = swap;
}


int     main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    while(i < argc)
    {
        j = i;
        if (ft_strcmp(argv[j], argv[j - 1]) < 0 && j > 1)
        {
            ft_swap(&argv[j], &argv[j - 1]);
            i = 0;
        }   
        i++;
    }
    i = 1;
    while (i < argc)
       ft_putstr(*(argv + i++));
    return (0);
}