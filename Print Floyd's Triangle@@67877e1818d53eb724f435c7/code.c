#include <stdio.h>

int main() {
    int n,a;
    scanf("%d", &n);
   
    for (int i = 1; i <= n; i++) {
         a=1;
         for(int j = a; j<=i ; j++){
            printf("%d ",a);
        }
        printf("\n");
        a++;
        

    }
    
    return 0;
}