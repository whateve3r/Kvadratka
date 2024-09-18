#include <stdio.h>
#include <math.h>

#include "minmax.h"
#include "solver.h"
#include "input.h"
#include "runtest.h"

//#define TEST

int main()
{
    #ifdef TEST
        RunTests();
    #else
        double a = 0, b = 0, c = 0;

        double x1 = 0, x2 = 0;

        input(&a, &b, &c);

        int NumRoots = UniversalSolver(a, b, c, &x1, &x2);

        output(NumRoots, x1, x2);

        return ok;
    #endif
}


