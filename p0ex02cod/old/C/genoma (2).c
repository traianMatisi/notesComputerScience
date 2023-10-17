#include <stdio.h>
#include <string.h>

int main(){
    
    char v1[50], v2[50];
    int i, j, x, y, q = 0, r = 0;

    fgets(v1, 50, stdin);
  
    fgets(v2, 50, stdin);
        
        for(i = 0; v1[i] != '\0'; i++){
            if(v1[i] == v2[0]){
                q = 0;
                x = i;
                y = 0;
                while(v1[x] == v2[y] && (v1[x] != '\0' && v2[y] != '\0')){
                    q++;
                    x++;
                    y++;
                }
                if(q == strlen(v2) || q == strlen(v2)- 1){
                    r += 1;
                }
            }
        }
        
        
        if(strlen(v2) > strlen(v1)){
            r = 0;
        }
        printf("%d ", r);
    
    return 0;
}