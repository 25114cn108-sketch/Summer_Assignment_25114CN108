//a program to Find missing number in array.

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 5};
    int n = 5; // Total numbers should be 1 to 5

    int sum = 0;
    int expectedSum = n * (n + 1) / 2;

    for(int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }

    printf("Missing Number = %d", expectedSum - sum);

    return 0;
}