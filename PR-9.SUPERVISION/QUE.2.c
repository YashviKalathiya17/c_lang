#include <stdio.h>


struct Student
 	{
    int roll_no;
    char name[50];
    float chem_marks;
    float maths_marks;
    float phy_marks;
    };

int main() 
{
    
    struct Student students[5];

	int i;
    for (i=0;i<5;i++) 
	{
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Chemistry Marks (out of 100): ");
        scanf("%f", &students[i].chem_marks);
        printf("Mathematics Marks (out of 100): ");
        scanf("%f", &students[i].maths_marks);
        printf("Physics Marks (out of 100): ");
        scanf("%f", &students[i].phy_marks);
        printf("\n");
    }

    
    printf("Student\tRoll No\tChemistry\tMathematics\tPhysics\tPercentage\n");
    
    
    int j;

	    for (i = 0; i < 5; i++) {
        float percentage = (students[i].chem_marks + students[i].maths_marks + students[i].phy_marks) / 3;
        printf("%s\t%d\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f%%\n", students[i].name, students[i].roll_no,
               students[i].chem_marks, students[i].maths_marks, students[i].phy_marks, percentage);
    }


}
