#include <stdio.h>

void findSmallestLargestDigits(int n, int numbers[]) {
    int smallestDigit = 5;
    int largestDigit = 0;

    
    for (int i = 0; i < n; i++) {
        int num = numbers[i];

       
        while (num > 0) {
            int digit = num % 10;

           
            if (digit < smallestDigit) {
                smallestDigit = digit;
            }
            if (digit > largestDigit) {
                largestDigit = digit;
            }

            num /= 10;
        }
    }

   
    printf("Smallest Digit: %d\n", smallestDigit);
    printf("Largest Digit: %d\n", largestDigit);
}

int main() {
    int n = 3;
    int numbers[] = {5, 256, 123450};


    if (n < 1) {
        printf("Not Valid\n");
        return 0;
    }

    findSmallestLargestDigits(n, numbers);

    return 0;
}