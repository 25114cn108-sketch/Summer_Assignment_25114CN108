//a program to Create inventory management system.

#include <stdio.h>

struct Item{
    int id,qty;
    char name[30];
};

int main(){

    struct Item i[3];

    for(int k=0;k<3;k++)
        scanf("%d%s%d",&i[k].id,i[k].name,&i[k].qty);

    for(int k=0;k<3;k++)
        printf("%d %s %d\n",i[k].id,i[k].name,i[k].qty);

    return 0;
}