#include <stdio.h>

int main()
{
    int a;

    printf("Enter the number: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}