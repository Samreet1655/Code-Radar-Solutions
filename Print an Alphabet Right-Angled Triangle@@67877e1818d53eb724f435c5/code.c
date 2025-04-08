#include <stdio.h>

int main() {
    int n,d;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        d = n+64;
        char ch=(char)d;
        for(int j = 0; j<i ; j++){
            printf("%c ",'A'+j);
        }
        printf("\n");

    }
    return 0;
}