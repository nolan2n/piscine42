#include <stdio.h>

int     ft_atoi(char *str)
{
    int     convert;
    int     sign;

    convert = 0;
    sign = 1;
    while((*str >= 9 && *str <= 13) || *str == 32) //ascii for the isspace and 32 is ' '(space)
        str++;
    while(*str == '+' || *str == '-')
    {
        if (*str++ == '-')
            sign *= -1;
    }    
    while(*str >= '0' && *str <= '9')
        convert = convert * 10 + (*str++ - '0');
    return (convert * sign);
}

int     main(void)
{
    char    *test = "    --++--23b1";
    printf("%d\n", ft_atoi(test));
    return (0);
}