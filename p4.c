// Check a positive integer number is perfect square or not
#include <stdio.h>
#include <math.h>

int main()
{

    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (sqrt(n) == (int)sqrt(n))
    {
        printf("%d is a perfect square\n", n);
    }
    else
    {
        printf("%d is not a perfect square\n", n);
    }

    return 0;
}
