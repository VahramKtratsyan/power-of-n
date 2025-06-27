#include "../header/power.hpp"

double power(int x, int n)
{
    double result = 1;
    int abs_n = (n < 0) ? -n : n;

    while (abs_n >= 1)
    {
        result *= x;
        --abs_n;
    }
    
    if (n < 0)
        result = 1 / result;

    return result;
}