//Display first n Tribonacci sequence.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int a = 0, b = 0, c = 1, d;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", c);
        d = a + b + c;
        a = b;
        b = c;
        c = d;
    }
    return 0;
}
