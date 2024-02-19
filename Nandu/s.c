#include <stdio.h>  // Include the standard input/output header file.
#include <ctype.h>  // Include the header file for character handling functions.
#include <string.h> // Include the header file for string handling functions.

void main()
{
    char notes[15]; // Declare a character array to store notes.
    char grd;       // Declare a character variable to store the grade.

    printf("Input the grade :"); // Prompt user for input of grade.
    scanf("%c", &grd);           // Read and store the grade.

    grd = toupper(grd); // Convert the grade to uppercase using 'toupper' function.

    switch (grd) // Start a switch statement based on the grade.
    {
    case 'E':
        strcpy(notes, " Excellent"); // Copy corresponding note for grade 'E'.
        break;
    case 'V':
        strcpy(notes, " Very Good"); // Copy corresponding note for grade 'V'.
        break;
    case 'G':
        strcpy(notes, " Good "); // Copy corresponding note for grade 'G'.
        break;
    case 'A':
        strcpy(notes, " Average"); // Copy corresponding note for grade 'A'.
        break;
    case 'F':
        strcpy(notes, " Fails"); // Copy corresponding note for grade 'F'.
        break;
    default:
        strcpy(notes, "Invalid Grade Found. \n"); // Copy message for invalid grade.
        break;
    }
    printf("You have chosen  : %s\n", notes); // Print the chosen note.
}