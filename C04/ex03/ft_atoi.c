#include <stdio.h>

int     ft_atoi(char *str)
{
    int     i;
    int     convert;
    int     sign;

    i = 0;
    convert = 0;
    sign = 1;
    while(*(str + i) == ' ' || *(str + i) == '\t' || *(str + i) == '\n' || *(str + i) == '\r' || *(str + i) == '\f' || *(str + i) == '\v')
        i++;
    while(*(str + i) == '+' || *(str + i) == '-')
    {
        if (*(str + i++) == '-')
            sign *= -1;
    }    
    while(*(str + i) >= '0' && *(str + i) <= '9')
        convert = convert * 10 + (*(str + i++) - '0');
    return (convert * sign);
}

int     main(void)
{
    char    *test = "    ---231";
    printf("%d\n", ft_atoi(test));
    return (0);
}