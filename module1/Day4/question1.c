#include <stdio.h>

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    float average;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    average = (float)sum / size;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}

