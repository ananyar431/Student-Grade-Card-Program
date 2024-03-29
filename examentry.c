#include <stdio.h>
#include "examentry.h"
void examentry(int isa1[][3], int isa2[][3], int esa[][3], int assignment[][3]){
    for (int i = 0; i < 10; i++)
    {
        int s1, s2, s3, s11, s12, s13, e1, e2, e3, a1, a2, a3;
        printf("\nStudent %d ISA 1 Subject 1 Marks: ", i + 1);
        scanf("%d", &s1);
        printf("\nStudent %d ISA 1 Subject 2 Marks: ", i + 1);
        scanf("%d", &s2);
        printf("\nStudent %d ISA 1 Subject 3 Marks: ", i + 1);
        scanf("%d", &s3);
        isa1[i][0] = s1;
        isa1[i][1] = s2;
        isa1[i][2] = s3;
        printf("\nStudent %d ISA 2 Subject 1 Marks: ", i + 1);
        scanf("%d", &s11);
        printf("\nStudent %d ISA 2 Subject 2 Marks: ", i + 1);
        scanf("%d", &s12);
        printf("\nStudent %d ISA 2 Subject 3 Marks: ", i + 1);
        scanf("%d", &s13);
        isa2[i][0] = s11;
        isa2[i][1] = s12;
        isa2[i][2] = s13;
        printf("\nStudent %d ESA Subject 1 Marks: ", i + 1);
        scanf("%d", &e1);
        printf("\nStudent %d ESA Subject 2 Marks: ", i + 1);
        scanf("%d", &e2);
        printf("\nStudent %d ESA Subject 3 Marks: ", i + 1);
        scanf("%d", &e3);
        esa[i][0] = e1;
        esa[i][1] = e2;
        esa[i][2] = e3;
        printf("\nStudent %d Assignment Subject 1 Marks: ", i + 1);
        scanf("%d", &a1);
        printf("\nStudent %d Assignment Subject 2 Marks: ", i + 1);
        scanf("%d", &a2);
        printf("\nStudent %d Assignment Subject 3 Marks: ", i + 1);
        scanf("%d", &a3);
        assignment[i][0] = a1;
        assignment[i][1] = a2;
        assignment[i][2] = a3;
    }
    printf("\nExam Entry Completed!");
}
