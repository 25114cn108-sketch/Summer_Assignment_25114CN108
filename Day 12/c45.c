//a program to Write function for palindrome.

#include <stdio.h>

int palindrome(int n) {
    int rev = 0, temp = n;
    while(temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

int main() {
    int num;
    scanf("%d", &num);

    if(palindrome(num))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}