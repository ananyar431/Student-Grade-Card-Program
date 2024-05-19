#include <stdio.h>
#include <string.h>

char grade(int n)
{
    if (n >= 90 && n <= 100)
        return 'S';
    else if (n >= 80 && n < 90)
        return 'A';
    else if (n >= 70 && n < 80)
        return 'B';
    else if (n >= 60 && n < 70)
        return 'C';
    else if (n >= 50 && n < 60)
        return 'D';
    else if (n >= 40 && n < 50)
        return 'E';
    else if (n >= 0 && n < 40)
        return 'F';
    return 'F'; 
}

struct Student
{
    char name[50];
    int roll;
    int isa1[3];
    int isa2[3];
    int esa[3];
    int ass[3];
};

int main()
{
   
    FILE *file = fopen("data.csv", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    
    fscanf(file, "%*[^\n]\n"); // added to skip the header line

    struct Student s[10];
    int i = 0;

    while (fscanf(file, "%[^,],%d,%d %d %d,%d %d %d,%d %d %d,%d %d %d\n",
                  s[i].name, &s[i].roll,
                  &s[i].isa1[0], &s[i].isa1[1], &s[i].isa1[2],
                  &s[i].isa2[0], &s[i].isa2[1], &s[i].isa2[2],
                  &s[i].esa[0], &s[i].esa[1], &s[i].esa[2],
                  &s[i].ass[0], &s[i].ass[1], &s[i].ass[2]) == 14 && i < 10)
    {
        i++;
    }


    fclose(file);


    int choice;
    printf("Choose:\n1. Grade Calculation\n2. Grade Table\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        for (int k = 0; k < i; k++)
        {
            int mavg = ((s[k].isa1[0] + s[k].isa2[0] + s[k].esa[0]) / 2) + s[k].ass[0];
            int cavg = ((s[k].isa1[1] + s[k].isa2[1] + s[k].esa[1]) / 2) + s[k].ass[1];
            int mechavg = ((s[k].isa1[2] + s[k].isa2[2] + s[k].esa[2]) / 2) + s[k].ass[2];
            char m = grade(mavg);
            char c = grade(cavg);
            char mech = grade(mechavg);

            printf("Name: %s, Math: %c, C: %c, Mech: %c\n", s[k].name, m, c, mech);
        }
    }
    else if (choice == 2)
    {
        char sname[50];
        printf("Enter name of required student: ");
        scanf(" %[^\n]", sname);
        for (int x = 0; x < i; x++)
        {
            if (strcmp(sname, s[x].name) == 0)
            {
                int maavg = ((s[x].isa1[0] + s[x].isa2[0] + s[x].esa[0]) / 2) + s[x].ass[0];
                int caavg = ((s[x].isa1[1] + s[x].isa2[1] + s[x].esa[1]) / 2) + s[x].ass[1];
                int mecavg = ((s[x].isa1[2] + s[x].isa2[2] + s[x].esa[2]) / 2) + s[x].ass[2];
                char ma = grade(maavg);
                char ca = grade(caavg);
                char mec = grade(mecavg);

                printf("\nName: %s\nRoll Number: %d\n\nMath: %c\nC: %c\nMechanical: %c\n\n", s[x].name, s[x].roll, ma, ca, mec);
            }
        }
    }
    else
    {
        printf("Invalid Entry.");
    }

    return 0;
}
