#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        int num = i;
        int contains_three = 0;

        while (num > 0) {
            if (num % 10 == 3) {
                contains_three = 1;
                break;
            }
            num /= 10;
        }

    
        if (i % 3 == 0 || contains_three) {
            sum += i;
        }
    }

    printf("The sum of integers divisible by 3 or containing the digit 3 is: %d\n", sum);
    return 0;
}
