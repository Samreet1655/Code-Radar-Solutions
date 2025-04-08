#include <stdio.h>

int main() {
    int n,m,k;
    scanf("%d %d", &n,&m);
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j<=m ; j++){
            while(k=m-n){
                printf(" ");
            }
            else{
            printf("*");
            }
        printf("\n");
        }
    return 0;
}