#include <stdio.h>

int main() {
    int temp;

    // Input temperature
    printf("Enter temperature in centigrade: ");
    scanf("%d", &temp);

    // Determine the weather condition using switch-case
    switch ((temp < 0) ? -1 : temp / 10) {
        case -1:
            printf("Freezing weather\n");
            break;
        case 0:
            printf("Very Cold weather\n");
            break;
        case 1:
            printf("Cold weather\n");
            break;
        case 2:
            printf("Normal in Temp\n");
            break;
        case 3:
            printf("It's Hot\n");
            break;
        default:
            printf("It's Very Hot\n");
            break;
    }

    return 0;
}
