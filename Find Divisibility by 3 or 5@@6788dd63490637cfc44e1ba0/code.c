#include <stdio.h>
int main (){
    int a,b;
    scanf("%d" "%d" , &a , &b);
    if((a%3==0 && a%5==0)&&(b%3==0 && b%5==0)){
        printf("Divisible by both");
    }
    else if((a%5==0)&&(b%5==0)){
        printf("Divisble by 5");
    }
    else if((a%3==0)&&(b%3==0)){
        printf("Divisible by 3");
    }
    else {
        printf("Not Divisible");
    }
    return 0;
}