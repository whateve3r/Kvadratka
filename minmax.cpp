#include "minmax.h"

double minimum(double Root1, double Root2)
{
    if (Root1 > Root2)
    {
        return Root2;
    }

    else
    {
        return Root1;
    }
}



double maximum(double Root1, double Root2)
{
    if (Root1 > Root2)
    {
        return Root1;
    }

    else
    {
        return Root2;
    }
}
