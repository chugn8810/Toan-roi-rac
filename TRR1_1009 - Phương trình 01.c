#include <stdio.h>
#include <string.h>
int main()
{
    double a, b;
    scanf( "%lf%lf", &a, &b);
    int p = 0;
    if (a == 0)
    {
        if (b == 0)
        {
            p = 1;
        }
        else
        {
            p = 0;
        }
    }
    else
    {
        if (-b / a < 0)
        {
            p = 1;
        }
        else
        {
            p = 0;
        }
    }
    printf("%d", p);
  
}
