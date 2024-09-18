#include "input.h"

int output(int NumRoots, double x1, double x2)
{
    switch(NumRoots)
    {
        case NoRoots:       printf("No roots\n");
                            break;

        case OneRoot:       printf("root - %lg\n", x1);
                            break;

        case TwoRoots:      printf("2 roots, x1 - %lg, x2 - %lg\n", x1, x2);
                            break;

        case InfiniteRoots: printf("Infinite roots\n");
                            break;

        default:            printf("main(): ERROR\n");
                            return Error;
    }

    return ok;
}



void input(double* a, double* b, double* c)
{
    printf("Enter a, b, c: ");

    while (scanf("%lg %lg %lg", a, b, c) != 3)
    {
        printf("Incorrect input. Try again: ");
        clearinput();
    }
}



int clearinput()
{
    while (getchar() != '\n');
    return ok;
}
