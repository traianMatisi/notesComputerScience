#include <stdio.h>

void movetorre (int n, char orig, char dest, char aux){
  movetorre(n-1,orig,aux,dest);
  movetorre(n-1,aux,dest,orig);
};

int main(){
    
   int discos;
   
   scanf("%d", &discos);
   
   movetorre(discos,'A','C','B');
   
   printf("\n");
   
   return 0;
}