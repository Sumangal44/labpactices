#include <stdio.h>

int main()
{
    int number;

    // Input the number
    printf("Enter a number between 0 and 9: ");
    scanf("%d", &number);

    // Check if the number is within the valid range
    if (number < 0 || number > 9)
    {
        printf("Invalid input! Please enter a number between 0 and 9.\n");
    }
    else
    {
        // Convert number to text form
        switch (number)
        {
        case 0:
            printf("0 - zero\n");
            break;
        case 1:
            printf("1 - one\n");
            break;
        case 2:
            printf("2 - two\n");
            break;
        case 3:
            printf("3 - three\n");
            break;
        case 4:
            printf("4 - four\n");
            break;
        case 5:
            printf("5 - five\n");
            break;
        case 6:
            printf("6 - six\n");
            break;
        case 7:
            printf("7 - seven\n");
            break;
        case 8:
            printf("8 - eight\n");
            break;
        case 9:
            printf("9 - nine\n");
            break;
        default:
            break; // This line will never execute, as we already validate the input.
        }
    }

    return 0;
}
