#include <stdio.h>

int main() {
    int num = 9872;
    int largest = 0;
    int temp = num;

   
    for (int i = 0; i < 4; i++) {
        int divisor = 1;
        int digit = 0;
        temp = num;

       
        for (int j = 0; j < i; j++) {
            divisor *= 10;
        }
        temp = temp / divisor / 10 * divisor + temp % divisor;

       
        if (temp > largest) {
            largest = temp;
        }
    }

    printf("The largest number after deleting a single digit: %d\n", largest);

    return 0;
}