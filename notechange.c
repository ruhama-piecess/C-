#include <stdio.h>

int main() {
    int amount = 375;
    int Notes100, Notes50, Notes20, Notes10, Notes5, Notes2, Notes1, remainingAmount;

    Notes100 = amount / 100;
    remainingAmount = amount % 100;

    Notes50 = remainingAmount / 50;
    remainingAmount %= 50;

    Notes20 = remainingAmount / 20;
    remainingAmount %= 20;

    Notes10 = remainingAmount / 10;
    remainingAmount %= 10;

    Notes5 = remainingAmount / 5;
    remainingAmount %= 5;

    Notes2 = remainingAmount / 2;
    remainingAmount %= 2;

    Notes1 = remainingAmount;

    printf("There are:\n");
    printf("%d Note(s) of 100.00\n", Notes100);
    printf("%d Note(s) of 50.00\n", Notes50);
    printf("%d Note(s) of 20.00\n", Notes20);
    printf("%d Note(s) of 10.00\n", Notes10);
    printf("%d Note(s) of 5.00\n", Notes5);
    printf("%d Note(s) of 2.00\n", Notes2);
    printf("%d Note(s) of 1.00\n", Notes1);

    return 0;
}
