#include <stdio.h>

int passagem_por_ref_01(int n, char argn[]);// = ref_02
int passagem_por_ref_02(int n, char* argn);// = ref_01
int passagem_por_ref_03(int n, char* argn[]);// = ref_04
int passagem_por_ref_04(int n, char** argn);// = ref_03

int main(void)
{
    int a = 15;
    int *p = &a; //here, asterisk is the pointer declaration, types must match
    printf("a = %i and *p = %i\n", a, *p); //here, asterisk is dereference (gets content of a) without it, gets the adress
    printf("&a = %i and p = %i\n", &a, p); //%p and %i gives adress in 2 ways, 0x and 0d
    printf("p = %i\n", p);// gets address stored in p
    printf("p+1 = %i\n", p+1);// gets the address "+1 neighbour" to p
    printf("*(p+n) = %i\n", *(p+0));// gets the value p in pointing,
    printf("*(p+1) = %i\n", *(p+1));// gets the value the p, see its neighbour and prints
    printf("*p+1 = %i\n", *p+1);// gets the value stored in *p (ergo, a) and adds 1
    return 0;
}