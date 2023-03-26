#include <stdio.h>

int main()
{
    int loop, rept, pali, num, res, a, b, c, d, e, f;
    for(loop = 999; loop > 899; loop--)
    {
        for(rept = 999; rept > 899; rept--)
        {
            num = loop*rept;
            res = num;
            a = num/100000;
            num -= a * 100000;
            b = num/10000;
            num -= b * 10000;
            c = num/1000;
            num -= c * 1000;
            d = num/100;
            num -= d * 100;
            e = num/10;
            num -= e * 10;
            f = num/1;
            num -= f * 1;
            if(a == f && b == e && c == d)
            {
                printf("%d", res);
                return 0;
                break;
            }
        }
    }
    return 0;
}