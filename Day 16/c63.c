//a program to Find pair with given sum.

#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 14;

    printf("Pairs:\n");

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                printf("%d + %d = %d\n",
                       arr[i], arr[j], target);
            }
        }
    }

    return 0;
}