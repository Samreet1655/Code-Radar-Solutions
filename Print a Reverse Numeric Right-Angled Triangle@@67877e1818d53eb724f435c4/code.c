#include <stdio.h>

int main() {
    int n,a;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        a=n;
        for(int j = 1; j<=a ; j++){
            printf("%d ",j);
        }
        a--;
        printf("\n");
        }
    return 0;
}