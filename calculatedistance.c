 #include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distance;

    x1 = 25;
    y1 = 15;
    x2 = 35;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
    y2 = 10;

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Distance between the said points: %f\n", distance);

    return 0;
}
