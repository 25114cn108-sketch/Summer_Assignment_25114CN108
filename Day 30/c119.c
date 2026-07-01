//a program to Create mini employee management system.

#include <stdio.h>

int main(){

    char name[3][30];
    float salary[3];

    for(int i=0;i<3;i++)
        scanf("%s%f",name[i],&salary[i]);

    for(int i=0;i<3;i++)
        printf("%s %.2f\n",name[i],salary[i]);

    return 0;
}