#include<stdio.h>
int main(){
    float cel,fer;
    printf("Enter cel:");
    scanf("%f",cel);
    fer=(cel*9/5)+32;
    printf("%f cel is %f fer",cel,fer);
    return 0;
}