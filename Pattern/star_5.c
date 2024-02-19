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
    for (int x = a - 1; x >= 1; x--)
    {
        for (int gap = 1; gap <= a - x; gap++)
        {
            printf(" ");
        }
        for (int y = 1; y <= 2 * x - 1; y++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}