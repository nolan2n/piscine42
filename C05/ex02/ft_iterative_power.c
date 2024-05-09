#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int result;

    result = 1;
    if(power < 0)
        return(0);
    if(nb == 0 || nb == 1)
        return(1);
    while(power-- > 0)
        result *= nb;
    return (result);
}

int main(void)
{
    printf("result : %d\n", ft_iterative_power(-2, 3));
    return (0);
}