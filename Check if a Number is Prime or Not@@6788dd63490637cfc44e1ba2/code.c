// Your code here...
#include<stdio.h>
int main(){
    int num, count = 0;
    scanf("%d", &num);

    for(int i = 1; i<=num;i++){
        if(num % i == 0){
            count++;
        }
    }

    if(count == 2) printf("Prime");
    else printf("Not Prime");
    return 0;
}