//a program to Create menu-driven array operations system.

#include <stdio.h>

int main(){

    int a[10],n,sum=0;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<n;i++)
        sum+=a[i];

    printf("Sum=%d",sum);

    return 0;
}