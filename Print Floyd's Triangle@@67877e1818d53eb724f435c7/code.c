#include <stdio.h>

int main() {
    int n,a;
    scanf("%d", &n);
    a=1;
    for (int i = 1; i <= n; i++) {
       
        for(int j = a; j<=i+1 ; j++){
            printf("%d ",j);
        }
        printf("\n");
        a++;
        }
        
    return 0;
}