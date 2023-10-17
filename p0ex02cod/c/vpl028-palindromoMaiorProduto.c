/*
INACABADO!!
Largest palindrome product

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/
#include <stdio.h>

int main(void)
{
    //int a = 10000;// 100 * 100
    //int a = 998001;// 999 * 999
    int a, x;
    int a_v[6];

    for(int b = 999; b >= 584; b--)// a partir de 583 o código comeca a quebrar(RAM?)
    {
        for(int c = 999; c >= 584; c--)// a partir de 583 o código comeca a quebrar(RAM?)
        {
            a = b * c;
            x = b * c;
            
            for(int i = 5; i >= 0; i--)// por ser palindromo, pode ser em qualquer sentido?
            {
                a_v[i] = a % 10;
                a /= 10;
            }

            if(a_v[0] == a_v[5] && a_v[1] == a_v[4] && a_v[2] == a_v[3])
            {
                printf("%i x %i = %i\n", b, c, x);
                return 0;
            }

            if(a_v[0] == 0 && a_v[1] == a_v[5] && a_v[2] == a_v[4])
            {
                printf("%i x %i = %i\n", b, c, x);
                return 0;
            }
        }
    }
}
// o maior produto tera 6 digitos [998001]
// o menor produto tera 5 digitos [10000]