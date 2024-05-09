#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if(nb < 0)
        return(0);
    if(nb == 0 || nb == 1)
        return(1);
    else
        return(nb * ft_recursive_factorial(nb - 1));
}

int main(void)
{
    printf("4! should be : 24\nThe result : %d\n", ft_recursive_factorial(4));
    return(0);
}