#include <stdio.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int     main(void)
{
    char    test[] = "12355";
    printf ("%d\n", ft_strlen(test));
    return (0);
}