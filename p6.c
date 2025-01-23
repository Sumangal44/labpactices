// Compute prime factors of a positive integer number.
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Prime factors of %d are: ", n);
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {

            printf("%d ", i);
            n = n / i;
        }
    }
    if (n > 1)
    {
        printf("%d", n);
    }
    return 0;
}
