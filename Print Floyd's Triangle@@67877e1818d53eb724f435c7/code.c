#include <stdio.h>

int main() {
    int n,a;
    scanf("%d", &n);
   
    for (int i = 1; i <= n; i++) {
         a=i;
         for(int j = a; j<=i ; j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
        

    }
    
    return 0;
}