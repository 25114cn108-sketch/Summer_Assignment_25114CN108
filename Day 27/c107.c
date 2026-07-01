//a program to Create salary management system.

#include <stdio.h>

int main(){

    float basic,hra,da,total;

    scanf("%f",&basic);

    hra=0.20*basic;
    da=0.10*basic;

    total=basic+hra+da;

    printf("Total Salary=%.2f",total);

    return 0;
}