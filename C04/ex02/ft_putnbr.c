#include <unistd.h>
void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    long l;

    l = nb;
    if (l < 0)
    {
        ft_putchar('-');
        l *= -1;
    }
    if (l >= 10 )
         ft_putnbr(l / 10);
    ft_putchar((l  % 10) + '0');
}

int     main(void)
{
    ft_putnbr(4231);
    return (0);
}
/*
-------how it work step by step---------------

Step 1 : 4231 > 10 thereby ft_putnbr(4231 / 10)

Step 2 : 423 > 10 thereby ft_putnbr(423 / 10)

Step 3 : 42 > 10 thereby ft_putnbr(42 / 10) 

Step 4 : 4 < 10  

-----------------ft_putchar--------------------

- So now we ft_putchar((l % 10) + '0'). %10 is to only ft_putchar the unit and + '0' is to convert an int to a char (ascii)

- The ft_putchar order will be "step 4 -> step 3 -> step 2 -> step 1".

ft_putchar(4 % 10)    = 4 
ft_putchar(42 % 10)   = 2
ft_putchar(423 % 10)  = 3
ft_putchar(4231 % 10) = 1

----------------the final result----------------

finally the result step by step will be :

step 1 -> 4
step 2 -> 42
step 3 -> 423
step 4 -> 4231
*/