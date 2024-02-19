#include <stdio.h>

int main()
{

    int a;

    printf("Enter the number: ");
    scanf("%d", &a);

    for (int j = 1; j <= a + 1; j++)
    {
        for (int i = 1; i <= a; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}