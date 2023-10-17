#include <stdio.h>

void mario(int a);

int main(void)
{
    mario(10);
}

void mario(int a)
{
    if (a > 0)
    {
        mario (a-1);// before laying the n sized layer, lay the n-1 size layer
        for (int i = 0; i < a; i++)
        {
            printf("#");
        }
        printf("\n");// so the hashes don't stack
    }
    else
    {
        return;// if asked 0 or negative layers, skip
    }
}