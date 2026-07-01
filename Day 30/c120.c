//a program to Develop complete mini project using arrays, strings and functions.

#include <stdio.h>

struct Student{
    int roll;
    char name[30];
    float marks;
};

void display(struct Student s[],int n){

    for(int i=0;i<n;i++)
        printf("%d %s %.2f\n",
        s[i].roll,s[i].name,s[i].marks);
}

int main(){

    struct Student s[5];
    int n;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d%s%f",
        &s[i].roll,s[i].name,&s[i].marks);

    display(s,n);

    return 0;
}