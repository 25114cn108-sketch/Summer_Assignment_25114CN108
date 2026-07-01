//a program to Create quiz application.

#include <stdio.h>

int main() {

    int score=0, ans;

    printf("1. Capital of India?\n");
    printf("1.Delhi 2.Mumbai 3.Chennai 4.Kolkata\n");
    scanf("%d",&ans);
    if(ans==1) score++;

    printf("2. 5+7=?\n");
    printf("1.10 2.12 3.15 4.17\n");
    scanf("%d",&ans);
    if(ans==2) score++;

    printf("Score=%d/2\n",score);

    return 0;
}