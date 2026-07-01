//a program to Create bank account system.

#include <stdio.h>

int main(){

    float balance=5000;
    int choice;
    float amount;

    while(1){

        printf("\n1.Deposit\n2.Withdraw\n3.Exit\n");
        scanf("%d",&choice);

        if(choice==1){
            scanf("%f",&amount);
            balance+=amount;
        }

        else if(choice==2){
            scanf("%f",&amount);

            if(amount<=balance)
                balance-=amount;
        }

        else
            break;

        printf("Balance=%.2f\n",balance);
    }

    return 0;
}