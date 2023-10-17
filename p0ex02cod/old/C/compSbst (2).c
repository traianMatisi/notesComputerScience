#include <stdio.h>

int main()
{
    char v1[50], v2[50];
    int i, j, x, y, q = 0, r = 0;

    fgets(v1, 50, stdin);
  
    fgets(v2, 50, stdin);
  
   
        
        for(i = 0; v1[i] != '\0'; i++)
        {
            for(j = 0; v2[j] != '\0'; j++)
            {
                if(v1[i] == v2[j])
                {
                    q = 0;
                    x = i;
                    y = j;
                    while(v1[x] == v2[y] && (v1[x] != '\0' && v2[y] != '\0'))
                    {
                        q++;
                        x++;
                        y++;
                    }
                    if(q > r)
                    {
                        r = q;
                    }
                }
            }
        }
        
        printf("%d ", r);
    
    return 0;
}