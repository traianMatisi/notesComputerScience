#include<stdio.h>
#include<stdlib.h>// for exit(0) function only

int ft_pair_x(int, int);
int ft_pair_y(int, int);

int main(void)
{
    int x = 9, y = 9;
    ft_pair_x(x, y);
    return 0;
}

int ft_pair_x(int a, int b)
{
    printf("[ %02i %02i ]\n", b, a);
    if (a <= 0)
    {
        a = 10;
        ft_pair_y(a, b - 1);
    }
    ft_pair_x(a - 1, b);
}

int ft_pair_y(int a, int b)
{
    if (b < 0)
    {
        exit(0);
    }
    ft_pair_x(a - 1, b);
}