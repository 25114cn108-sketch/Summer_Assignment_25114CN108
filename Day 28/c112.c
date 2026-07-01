//a program to Create contact management system.

#include <stdio.h>

struct Contact{
    char name[30];
    char phone[15];
};

int main(){

    struct Contact c[3];

    for(int i=0;i<3;i++)
        scanf("%s%s",c[i].name,c[i].phone);

    for(int i=0;i<3;i++)
        printf("%s %s\n",c[i].name,c[i].phone);

    return 0;
}