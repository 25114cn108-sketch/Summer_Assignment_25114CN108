//Program to Find nth Fibonacci Term

#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    printf("Enter n: ");
    scanf("%d", &n);

    if(n == 0)
        printf("Nth Fibonacci term = 0");
    else if(n == 1)
        printf("Nth Fibonacci term = 1");
    else {
        for(i = 2; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }

        printf("Nth Fibonacci term = %d", second);
    }

    return 0;
}