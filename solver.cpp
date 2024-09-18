#include "solver.h"

int LinearSolver(double b, double c, double* x1)
{
    if (comparison(b, 0) == IsZero)
    {
        return (comparison(c, 0) == IsZero) ? InfiniteRoots : NoRoots;
    }

    else
    {
        *x1 = -c / b;
        return OneRoot;
    }
}

int UniversalSolver(double a, double b, double c, double* x1, double* x2)
{
    if (comparison(a, 0) == IsZero)
    {
        return LinearSolver(b, c, x1);;
    }

    else
    {
        return SolveSQ(a, b, c, x1, x2);
    }
}

int SolveSQ(double a, double b, double c, double* x1, double* x2)
{
    double D = b * b - 4 * a * c;

    if (D > 0)
    {
        double SqrtD = sqrt(D);
        *x1 = (-b + SqrtD) / (2 * a);
        *x2 = (-b - SqrtD) / (2 * a);
        return TwoRoots;
    }

    if (comparison(D, 0) == IsZero)
    {
        *x1 = (-b) / (2 * a);
        return OneRoot;
    }

    if (D < 0)
    {
        return NoRoots;
    }

    return ok;
}
