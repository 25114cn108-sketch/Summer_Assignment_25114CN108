//a program to Create student record management system.

#include <stdio.h>

struct Student{
    int roll;
    char name[30];
    float marks;
};

int main(){

    struct Student s[5];
    int n,i;

    printf("Enter number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d%s%f",&s[i].roll,s[i].name,&s[i].marks);
    }

    printf("\nRecords\n");

    for(i=0;i<n;i++){
        printf("%d %s %.2f\n",s[i].roll,s[i].name,s[i].marks);
    }

    return 0;
}