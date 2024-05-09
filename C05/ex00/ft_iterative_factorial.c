#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int result;

    result = 1;
    if(nb < 0)
        return(0);
    if(nb == 0 || nb == 1)
        return(1);
    while(nb > 1)
        result *= nb--;
    return(result);
}

int main(void)
{
    printf("4! should be : 24\nThe result : %d\n", ft_iterative_factorial(4));
    return(0);
}