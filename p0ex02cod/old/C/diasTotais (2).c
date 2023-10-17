#include <stdio.h>

int main (){
    
    int d1, d2, m1, m2, a1, md, mm, ma;
    int ent, loop;
    
    scanf("%d", &ent);

    for (loop = 0; loop < ent; loop++){
        
        int total = 0;
        
        scanf("%d %d, %d %d %d", &d2, &m2, &d1, &m1, &a1);
        if (m2 == m1 && d2 > d1){
            md = d2 - d1;
            total = total + md;
        }
        if (m2 == m1 && d2 < d1){
            md = d1 - d2;
            total = total + (365 - md);
        }
        if (m2 > m1){
            mm = m2 - m1;
            total = total + (mm * 30);
        }
        if (m2 < m1){
            mm = m2 - m1;
            total = total + (365 - (mm * 30));
        }
        printf("%d\n", total);
    }

    return 0;
}