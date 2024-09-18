#include "comparison.h"
int comparison(double Number1, double Number2)
{
    if (fabs(Number1 - Number2) < epsilon)
    {
        return IsZero;
    }

    else
    {
        return IsntZero;
    }
}
