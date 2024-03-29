#include <stdio.h>
#include "gradecalculation.h"
void grade(int n,int i,int sub)
{
    
    if (n>=90 && n<=100){
        printf("\nStudent %d Subject %d Grade: S",i+1,sub);
    }
    else if (n>=80 && n<90){
        printf("\nStudent %d Subject %d Grade: A",i+1,sub);
    }
    else if (n>=70 && n<80){
        printf("\nStudent %d Subject %d Grade: B",i+1,sub);
    }
    else if (n>=60 && n<70){
        printf("\nStudent %d Subject %d Grade: C",i+1,sub);
    }
    else if (n>=50 && n<60){
        printf("\nStudent %d Subject %d Grade: D",i+1,sub);
    }
    else if (n>=40 && n<50){
        printf("\nStudent %d Subject %d Grade: E",i+1,sub);
    }
    else if (n>=0 && n<40){
        printf("\nStudent %d Subject %d Grade: F",i+1,sub);
    }
}

void gradecalculation(int isa1[][3],int isa2[][3],int esa[][3],int assignment[][3])
{
    for (int i=0;i<10;i++){
        int avg1= ((isa1[i][0]+ isa2[i][0]+ esa[i][0])/2)+assignment[i][0];
        int avg2= ((isa1[i][1]+ isa2[i][1]+ esa[i][1])/2)+assignment[i][1];
        int avg3= ((isa1[i][2]+ isa2[i][2]+ esa[i][2])/2)+assignment[i][2];
        grade(avg1,i,1);
        grade(avg2,i,2);
        grade(avg3,i,3);
    }
}
