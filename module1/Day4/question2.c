#include <stdio.h>

int main() {
    int arr[] = {53, 107, 153, 450, 99};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}