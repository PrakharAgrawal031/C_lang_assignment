#include <stdio.h>

int main(){
    char name[20];
    printf("Enter your name\n");
    scanf("%s",&name);
    printf("hello,%s",name);
    return 0;
}
// [^\n]%*c