//a program to Create menu-driven string operations system.

#include <stdio.h>
#include <string.h>

int main(){

    char str[100];

    scanf("%s",str);

    printf("Length=%lu\n",strlen(str));

    strrev(str);

    printf("Reverse=%s",str);

    return 0;
}