#include <stdio.h>

int main() {
    int n,a;
    scanf("%d", &n);
    a=1;
    for (int i = 1; i <= n; i++) {
       
        for(int j = a; j<=a+i; j++){
            printf("%d ",j);
            a++;
        }
        printf("\n");
        
        }
        
    return 0;
}