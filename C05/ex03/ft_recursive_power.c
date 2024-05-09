#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if(power < 0)
        return(0);
    if(power == 0)
        return(1);
    else
        return(nb * ft_recursive_power(nb, power - 1));
}

int main(void)
{
    printf("The result : %d\n", ft_recursive_power(3, 3));
    return(0);
}