#include <stdio.h>

int main()
{

    int a;

    printf("Enter the number: ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int b = a - 1; b >= 1; b--)
    {
        for (int c = 1; c <= b; c++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}