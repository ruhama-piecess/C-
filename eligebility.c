#include <stdio.h>

int main() {
    int marksMaths, marksPhysics, marksChemistry;
    int totalAllSubjects, totalMathsPhysics;

    
    printf("Enter marks in Mathematics: ");
    scanf("%d", &marksMaths);
    printf("Enter marks in Physics: ");
    scanf("%d", &marksPhysics);
    printf("Enter marks in Chemistry: ");
    scanf("%d", &marksChemistry);

  
    totalAllSubjects = marksMaths + marksPhysics + marksChemistry;
    totalMathsPhysics = marksMaths + marksPhysics;

    
    if ((marksMaths >= 65 && marksPhysics >= 55 && marksChemistry >= 50 && totalAllSubjects >= 190) ||
        (marksMaths >= 65 && marksPhysics >= 55 && marksChemistry >= 50 && totalMathsPhysics >= 140)) {
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is not eligible for admission.\n");
    }

    return 0;
}
