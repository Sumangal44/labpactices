//Compute the grade of a student using else-if ladder/switch case.
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the marks of the student: ");
    scanf("%d", &marks);
    if (marks >= 90)
    {
        printf("The grade of the student is A\n");
    }
    else if (marks >= 80)
    {
        printf("The grade of the student is B\n");
    }
    else if (marks >= 70)
    {
        printf("The grade of the student is C\n");
    }
    else if (marks >= 60)
    {
        printf("The grade of the student is D\n");
    }
    else if (marks >= 40)
    {
        printf("The grade of the student is E\n");
    }
    else
    {
        printf("The grade of the student is F\n");
    }
    return 0;
}
