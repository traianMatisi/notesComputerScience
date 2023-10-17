#include <stdio.h>

int main(void)
{
    //long long int n = 600851475143;// 600'851'475'143.00
    //long long int n = 13195;
    int a = 12, b = 8, c = 4, fator = 1;

    for(int i = 2; i <= a; i++)
    {
        if(a % i == 0 || b % i == 0 || c % i == 0)
        {
            printf("% 2i - % 2i - % 2i | % 2i\n", a, b, c, i);
            if(a % i == 0) a /= i;
            if(b % i == 0) b /= i;
            if(c % i == 0) c /= i;
            fator *= i;
            i = 1;
        }
    }
    printf("% 2i - % 2i - % 2i | / % 2i\n", a, b, c, fator);
    return 0;
}
