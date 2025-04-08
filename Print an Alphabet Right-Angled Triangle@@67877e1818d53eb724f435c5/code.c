#include <stdio.h>

int main() {
    int n,d;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        d = n+64;
        char ch=(char)d;
        for(int j = 1; j<=i ; j++){
            printf("%c",j);
        }
        printf("\n");

    }
    return 0;
}