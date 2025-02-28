#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 100; i < 200; i++) {
        int temp = i;
        int contains_three = 0;

     
        while (temp > 0) {
            if (temp % 10 == 3) {
                contains_three = 1;
                break;
            }
            temp /= 10;
        }

       
        if (!contains_three && i % 3 != 0) {
            sum += i;
        }
    }

    printf("The sum of integers between 100 and 200 that are not divisible by 3 and do not contain the digit 3 is: %d\n", sum);
    return 0;
}
