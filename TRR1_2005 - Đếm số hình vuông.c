#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n, t = 0, total = 1, sum = 1;
    scanf("%d", &n);
    while (sum < n)
    {
        ++t;
        ++total;
        sum = sum + total * total;
    }
    printf("%d", t);
}
