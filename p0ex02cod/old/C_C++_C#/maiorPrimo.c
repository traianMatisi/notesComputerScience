#include<stdio.h>
#include<math.h>

int main(){
    
    long long x = 600851475143;
    long a = 2;
    
    while(a <= sqrt(x)){
        if(x%a == 0){
            while(x%a == 0){
                x/=a;
            }
            if(x==1){
                x=a;
                break;
            }
        } else{
            a++;
        }
    }
    
    printf("%lld", x);
    
    return 0;
}