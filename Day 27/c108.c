//a program to Create marksheet generation system.

#include <stdio.h>

int main(){

    int m1,m2,m3,total;
    float per;

    scanf("%d%d%d",&m1,&m2,&m3);

    total=m1+m2+m3;
    per=total/3.0;

    printf("Total=%d\n",total);
    printf("Percentage=%.2f\n",per);

    if(per>=90)
        printf("Grade A");
    else if(per>=75)
        printf("Grade B");
    else if(per>=60)
        printf("Grade C");
    else
        printf("Fail");

    return 0;
}