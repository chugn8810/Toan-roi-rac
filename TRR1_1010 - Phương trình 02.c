#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    double a, b, c, delta;
    int p = 0;
    scanf("%lf%lf%lf", &a, &b, &c);
    delta = b * b - 4 * a * c;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                p = 1;
            else
                p = 0;
        }
        else
        {
            if (-c / b > 0)
            {
                p = 1;
            }
        }
    }
    else
    {
        if (delta > 0)
        {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            if (x1 > 0)
                p = 1;
            if (x2 > 0)
                p = 1;
        }
        else if (delta == 0)
        {
            if (-b / (2 * a) > 0)
            {
                p = 1;
            }
            else
            {
                p = 0;
            }
        }
        else if (delta < 0)
        {
            p = 0;
        }
    }
    printf("%d", p);
}
