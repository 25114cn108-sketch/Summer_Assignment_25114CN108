//a program to Create library management system.

#include <stdio.h>

struct Book{
    int id;
    char name[30];
};

int main(){

    struct Book b[3];

    for(int i=0;i<3;i++)
        scanf("%d%s",&b[i].id,b[i].name);

    printf("\nBooks\n");

    for(int i=0;i<3;i++)
        printf("%d %s\n",b[i].id,b[i].name);

    return 0;
}