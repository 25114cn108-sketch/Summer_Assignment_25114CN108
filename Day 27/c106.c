//a program to Create employee management system.

#include <stdio.h>

struct Employee{
    int id;
    char name[30];
    float salary;
};

int main(){

    struct Employee e[5];
    int n,i;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d%s%f",&e[i].id,e[i].name,&e[i].salary);

    printf("\nEmployee Details\n");

    for(i=0;i<n;i++)
        printf("%d %s %.2f\n",e[i].id,e[i].name,e[i].salary);

    return 0;
}