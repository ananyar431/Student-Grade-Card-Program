#include <stdio.h>
#include "gradetable.h"
char grade2(int n){
    char g;
    if (n > 100 || n < 0){
        printf("\nError. Wrong marks entered.");
    }
    else if (n >= 90 && n <= 100){
        g = 'S';
    }
    else if (n >= 80 && n < 90){
        g = 'A';
    }
    else if (n >= 70 && n < 80){
        g = 'B';
    }
    else if (n >= 60 && n < 70){
        g = 'C';
    }
    else if (n >= 50 && n < 60){
        g = 'D';
    }
    else if (n >= 40 && n < 50){
        g = 'E';
    }
    else if (n >= 0 && n < 40){
        g = 'F';
    }
    return g;
}

void gradetable(char studentname[][50], int rollno[], int isa1[][3], int isa2[][3], int esa[][3], int assignment[][3]){
    int n;
    printf("\nEnter Student Number (1-10): ");
    scanf("%d", &n);
    int m1 = ((isa1[n - 1][0] + isa2[n - 1][0] + esa[n - 1][0]) / 2) + assignment[n - 1][0];
    int m2 = ((isa1[n - 1][1] + isa2[n - 1][1] + esa[n - 1][1]) / 2) + assignment[n - 1][1];
    int m3 = ((isa1[n - 1][2] + isa2[n - 1][2] + esa[n - 1][2]) / 2) + assignment[n - 1][2];
    printf("\nName: %s", studentname[n - 1]);
    printf("\nRoll Number: %d", rollno[n - 1]);
    printf("\n\nSubject 1      %c", grade2(m1));
    printf("\nSubject 2      %c", grade2(m2));
    printf("\nSubject 3      %c", grade2(m3));
}
