#include <stdio.h>

int main(){
    int alunos, nota, loop, menor1, menor2;

    //printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos);
    
    menor1 = 10, menor2 = 10;
    for(loop = 1; loop <= alunos; loop++){
        
        scanf("%d ", &nota);

        if(nota >= 0){
            if(nota <= 10){
                if(nota < menor1){
                    menor2 = menor1;
                    menor1 = nota;
                }
                if((nota < menor2) && (nota>menor1)){
                    menor2 = nota;
                }
            }
        }
    }

    printf("%d", menor2);

    return 0;
}