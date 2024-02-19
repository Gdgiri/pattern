#include <stdio.h>
#include <ctype.h>

// Function prototypes
void printA();
void printB();
void printC();
void printD();
void printE();
void printF();
void printG();
void printH();
void printI();
void printJ();
void printK();
void printL();
void printM();
void printN();
void printO();
void printP();
void printQ();
void printR();
void printS();
void printT();
void printU();
void printV();
void printW();
void printX();
void printY();
void printZ();

int main()
{
    char name[30]; // Declare name as an array of characters
    printf("Input the name: ");
    scanf("%s", name); // Use %s to read a string

    for (int i = 0; name[i] != '\0'; i++)
    {
        name[i] = toupper(name[i]); // Convert each character to uppercase

        switch (name[i])
        {
        case 'A':
            printA();
            break;
        case 'B':
            printB();
            break;
        case 'C':
            printC();
            break;
        case 'D':
            printD();
            break;
        case 'E':
            printE();
            break;
        case 'F':
            printF();
            break;
        case 'G':
            printG();
            break;
        case 'H':
            printH();
            break;
        case 'I':
            printI();
            break;
        case 'J':
            printJ();
            break;
        case 'K':
            printK();
            break;
        case 'L':
            printL();
            break;
        case 'M':
            printM();
            break;
        case 'N':
            printN();
            break;
        case 'O':
            printO();
            break;
        case 'P':
            printP();
            break;
        case 'Q':
            printQ();
            break;
        case 'R':
            printR();
            break;
        case 'S':
            printS();
            break;
        case 'T':
            printT();
            break;
        case 'U':
            printU();
            break;
        case 'V':
            printV();
            break;
        case 'W':
            printW();
            break;
        case 'X':
            printX();
            break;
        case 'Y':
            printY();
            break;
        case 'Z':
            printZ();
            break;
        default:
            printf(" \n:\n");
            break;
        }
    }
    return 0;
}

// Function definitions
void printA()
{
    printf("  *  \n");
    printf(" * * \n");
    printf("*****\n");
    printf("*   *\n");
    printf("*   *\n");
}

void printB()
{
    printf("**** \n");
    printf("*   *\n");
    printf("**** \n");
    printf("*   *\n");
    printf("**** \n");
}

// Define functions for each letter similarly...
void printC()
{
    printf("*****\n");
    printf("*    \n");
    printf("*    \n");
    printf("*    \n");
    printf("*****\n");
}

void printD()
{
    printf("***  \n");
    printf("*  * \n");
    printf("*   *\n");
    printf("*  * \n");
    printf("***  \n");
}

void printE()
{
    printf("*****\n");
    printf("*    \n");
    printf("**** \n");
    printf("*    \n");
    printf("*****\n");
}

void printF()
{
    printf("*****\n");
    printf("*    \n");
    printf("**** \n");
    printf("*    \n");
    printf("*    \n");
}

void printG()
{
    printf("*****\n");
    printf("*    \n");
    printf("*  **\n");
    printf("*   *\n");
    printf("*****\n");
}

void printH()
{
    printf("*   *\n");
    printf("*   *\n");
    printf("*****\n");
    printf("*   *\n");
    printf("*   *\n");
}

void printI()
{
    printf("*****\n");
    printf("  *  \n");
    printf("  *  \n");
    printf("  *  \n");
    printf("*****\n");
}

void printJ()
{
    printf("    *\n");
    printf("    *\n");
    printf("    *\n");
    printf("*   *\n");
    printf(" *** \n");
}

void printK()
{
    printf("*  * \n");
    printf("* *  \n");
    printf("**   \n");
    printf("* *  \n");
    printf("*  * \n");
}

void printL()
{
    printf("*    \n");
    printf("*    \n");
    printf("*    \n");
    printf("*    \n");
    printf("*****\n");
}

void printM()
{
    printf("*   *\n");
    printf("** **\n");
    printf("* * *\n");
    printf("*   *\n");
    printf("*   *\n");
}

void printN()
{
    printf("*   *\n");
    printf("**  *\n");
    printf("* * *\n");
    printf("*  **\n");
    printf("*   *\n");
}

void printO()
{
    printf(" *** \n");
    printf("*   *\n");
    printf("*   *\n");
    printf("*   *\n");
    printf(" *** \n");
}

void printP()
{
    printf("**** \n");
    printf("*   *\n");
    printf("**** \n");
    printf("*    \n");
    printf("*    \n");
}

void printQ()
{
    printf(" *** \n");
    printf("*   *\n");
    printf("* * *\n");
    printf("*  **\n");
    printf(" *** \n");
}

void printR()
{
    printf("**** \n");
    printf("*   *\n");
    printf("**** \n");
    printf("* *  \n");
    printf("*  * \n");
}

void printS()
{
    printf("*****\n");
    printf("*    \n");
    printf("*****\n");
    printf("    *\n");
    printf("*****\n");
}

void printT()
{
    printf("*****\n");
    printf("  *  \n");
    printf("  *  \n");
    printf("  *  \n");
    printf("  *  \n");
}

void printU()
{
    printf("*   *\n");
    printf("*   *\n");
    printf("*   *\n");
    printf("*   *\n");
    printf(" *** \n");
}

void printV()
{
    printf("*   *\n");
    printf("*   *\n");
    printf("*   *\n");
    printf(" * * \n");
    printf("  *  \n");
}

void printW()
{
    printf("*   *\n");
    printf("*   *\n");
    printf("* * *\n");
    printf("** **\n");
    printf("*   *\n");
}

void printX()
{
    printf("*   *\n");
    printf(" * * \n");
    printf("  *  \n");
    printf(" * * \n");
    printf("*   *\n");
}

void printY()
{
    printf("*   *\n");
    printf(" * * \n");
    printf("  *  \n");
    printf("  *  \n");
    printf("  *  \n");
}

void printZ()
{
    printf("*****\n");
    printf("   * \n");
    printf("  *  \n");
    printf(" *   \n");
    printf("*****\n");
}