#include <stdio.h>

int main()
{
    int a;

    printf("Enter the number: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        for (int space = 1; space <= a - i; space++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int b = a; b >= 1; b--)
    {
        for (int gap = 1; gap <= a - b; gap++)
        {
            printf(" ");
        }
        for (int d = 1; d <= 2 * b - 1; d++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}