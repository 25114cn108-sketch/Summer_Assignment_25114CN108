//a program to Create ticket booking system.

#include <stdio.h>

int main(){

    int seats=50,book;

    scanf("%d",&book);

    if(book<=seats){
        seats-=book;
        printf("Booked Successfully\n");
    }
    else
        printf("Not Available");

    return 0;
}