#include <stdio.h>

int main()
{

    int a;

    printf("Enter the number: ");
    scanf("%d", &a);
    for (int b = 1; b <= a; b++)
    {
        for (int c = 1; c <= b; c++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for (int i = a - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}