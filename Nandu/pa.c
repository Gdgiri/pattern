#include <stdio.h>

int main()
{
    char pattern[50];

    printf("Enter the name: ");
    scanf("%s", pattern); // Corrected scanf format specifier from "&s" to "%s"

    // Loop to determine the length of the string
    int length = 0;
    while (pattern[length] != '\0')
    {
        length++;
    }

    // Loop to print the pattern
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", pattern[j]); // Add space after each character for clarity
        }
        printf("\n");
    }

    return 0;
}
