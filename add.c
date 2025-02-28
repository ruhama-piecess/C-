#include <stdio.h>

int main() {
    int sum = 0;

    // Loop through numbers 1 to 100
    for (int i = 1; i <= 100; i++) {
        // Check if the number contains the digit '3'
        int temp = i;
        while (temp > 0) {
            if (temp % 10 == 3) {
                sum += i;
                break;
            }
            temp /= 10;
        }
    }

    printf("The sum of integers between 1 and 100 that contain the digit 3 is: %d\n", sum);
    return 0;
}
