#include <stdio.h> 

int sort_int(int *v)
{
    int c, d=0, menor, swaps = 0;

    for (int i = 0; v[i] != '\0'; ++i)
    {
        if (v[i] > v[i + 1] && v[i + 1] != '\0')
        {
            v[i] = v[i] + v[i + 1];
            v[i + 1] = v[i] - v[i + 1];
            v[i] = v[i] - v[i + 1];
            
            swaps++;
        }
    }
    return swaps;
}

int main(){
    
    int casos, vagoes, swaps;
    int trem[50];
    
    scanf("%d", &casos);
    
    for(int j = 0; j < casos; j++){
        scanf("%d", &vagoes);
        
        for(int i = 0; i < vagoes; i++){
            scanf("%d", &trem[i]);
        }
        
        swaps = sort_int(trem);
        
        printf("Optimal train swapping takes %d swaps.\n", swaps);
    }
    return 0;
}