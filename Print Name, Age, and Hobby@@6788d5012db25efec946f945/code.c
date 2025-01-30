#include <stdio.h>
int main (){
    int name[100] , age[100] , hobby[100];
    scanf("%s" , "%s", &name , &age);
    scanf("%s", &hobby);
    printf("Name: %s\n" ,name);
    printf("Age: %s\n" ,age);
    printf("Hobby: %s\n" , hobby);
    return 0;

}