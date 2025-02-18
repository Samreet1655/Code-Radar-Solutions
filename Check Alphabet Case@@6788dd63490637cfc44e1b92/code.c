#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" , str2[] = "abcdefghijklmnopqrstuvwxyz";
    if (str1,a){
        printf("Uppercase");
    }
    else if (str2,a) {
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet");
    }
}
    
