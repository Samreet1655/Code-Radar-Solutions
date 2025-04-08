#include <stdio.h>

int main() {
    int n,a;
    scanf("%d", &n);
      a=1;
   
    for (int i = 1; i <= n; i++) {

         for(int j = a; j<=i+a-2 ; j++){
            printf("%d ",j);
        }
        printf("\n");
        a++;
        

    }
    
    
    return 0;
}