#include <stdio.h>

int main() {
    int sum = 0;

   
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0) { 
            sum += i;
        }
    }

    printf("The sum of integers divisible by 3 between 1 and 100 is: %d\n", sum);
    return 0;
}
