#include <stdio.h>

int main() {
    int sum = 0;
    int i = 1; 

    while (i <100) {
        
        int num = i;
        while (num > 0) {
            if (num % 10 == 3) {
                sum += i;
                break;
            }
            num/= 10;
        }
        i++; 
    }

    printf("The sum of integers between 1 and 100 that contain the digit 3 is: %d\n", sum);
    return 0;
}
