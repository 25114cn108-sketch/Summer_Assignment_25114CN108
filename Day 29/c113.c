//a program to Create menu-driven calculator.

#include <stdio.h>

int main(){

    int ch;
    float a,b;

    scanf("%f%f",&a,&b);

    printf("1.Add\n2.Sub\n3.Mul\n4.Div\n");
    scanf("%d",&ch);

    switch(ch){
        case 1: printf("%.2f",a+b); break;
        case 2: printf("%.2f",a-b); break;
        case 3: printf("%.2f",a*b); break;
        case 4: printf("%.2f",a/b);
    }

    return 0;
}