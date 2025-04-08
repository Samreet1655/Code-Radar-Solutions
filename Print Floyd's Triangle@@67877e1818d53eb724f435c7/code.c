#include <stdio.h>

int main() {
    int n,a,k;
    scanf("%d", &n);
    a=1;
    for (int i = 1; i <= n; i++) {
        k=i;
        for(int j = i; j<=a+k; j++){
            printf("%d ",j);
            a++;
        }
        printf("\n");
        
        }
        
    return 0;
}