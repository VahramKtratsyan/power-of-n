double power(int x, int n)
{
    double result = 1;
    while (n >= 1)
    {
        result *= x;
        --n;
    }
    return result;
}