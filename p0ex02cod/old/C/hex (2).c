#include <stdio.h>

int main(){
    
    char hex[11]; 
    char cod[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    int ent, num, loop, rept;
    
    scanf("%d", &ent);
    
    loop = 0;
    while(ent > 0){
        
        num = ent%16;
        
        if(num >= 10 && num <= 15){
            hex[loop] = cod[num - 10];
        }
        else{
            hex[loop] = num + '0';
        }
        loop++;
        ent /= 16;
        
    }
    
    for(rept = loop; rept > -1; rept--){
        
        if(hex[rept] >= '0' && hex[rept] <= '9')
        {
            printf("%d", hex[rept] - '0');
        }
        else if(hex[rept] >= 'A' && hex[rept] <= 'F')
        {
            printf("%c", hex[rept]);
        }
    }
    return 0;
}