#include <stdio.h>

int main(){
	int i, n, f;
	scanf("%d", &n);
    for(i = n; i > 0; n--){
		f *= n;
	}
  
  printf("%d", f);
  return 0;
}
