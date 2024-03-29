#include <stdio.h>
#include "studentinfo.h"
#include "examentry.h"
#include "gradecalculation.h"
#include "gradetable.h"

int main() {
    int n;
    char studentname[10][50];
    int rollno[10];
    int isa1[10][3];
    int isa2[10][3];
    int esa[10][3];
    int assignment[10][3];

    int goon = 0;
    char yn;
    while (goon == 0) {
        printf("1. Student Information\n2. Marks Entry\n3. Grade Calculation\n4. Grade Table\n\nChoose an option: ");
        scanf("%d", &n);
        switch (n) {
            case 1:
                studentinfo(studentname, rollno);
                break;
            case 2:
                examentry(isa1, isa2, esa, assignment);
                break;
            case 3:
                gradecalculation(isa1, isa2, esa, assignment);
                break;
            case 4:
                gradetable(studentname, rollno, isa1, isa2, esa, assignment);
                break;
            default:
                printf("\nInvalid Entry.");
                break;
        }
        printf("\nContinue? (y/n): ");
        scanf(" %c", &yn);
        if (yn != 'y') {
            goon = 1;
        }
    }

    return 0;
}
