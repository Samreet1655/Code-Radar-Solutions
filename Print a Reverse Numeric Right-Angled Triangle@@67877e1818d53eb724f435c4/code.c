#include <stdio.h>

int main() {
    int n,a;
    scanf("%d", &n);
     a=n;
    for (int i = 1; i <= n; i++) {
       
        for(int j = 1; j<=a+1 ; j++){
            printf("%d ",j);
            a--;
        }
        
        printf("\n");
        }
        
    return 0;
}