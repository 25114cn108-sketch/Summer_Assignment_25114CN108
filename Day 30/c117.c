//a program to Create student record system using arrays and strings.

#include <stdio.h>

int main(){

    int roll[5];
    char name[5][30];

    for(int i=0;i<5;i++)
        scanf("%d%s",&roll[i],name[i]);

    for(int i=0;i<5;i++)
        printf("%d %s\n",roll[i],name[i]);

    return 0;
}