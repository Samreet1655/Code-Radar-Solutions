#include <stdio.h>
int main () {
    char name , hobby;
    int age;
    scanf("%s" , "%s", &name , &age);
    scanf("%s", &hobby);
    printf("Name: %s\n" ,name);
    printf("Age: %d\n" ,age);
    printf("Hobby: %s\n" , hobby);
    return 0;

}