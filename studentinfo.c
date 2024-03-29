#include <stdio.h>
#include "studentinfo.h"
void studentinfo(char studentname[][50], int rollno[]) {
    for (int i = 0; i < 10; i++) {
        printf("\nStudent %d Name: ", i + 1);
        scanf("%s", studentname[i]);
        printf("\nStudent %d Roll Number: ", i + 1);
        scanf("%d", &rollno[i]);
    }
    printf("\nNames and Roll Numbers Updated.");
}
