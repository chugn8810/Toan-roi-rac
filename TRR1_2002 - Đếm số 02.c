#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int a, b, k, m, total = 0;
    scanf("%d%d%d%d", &a, &b, &k, &m);
    for (int i = a; i <= b; i++)
    {
        if (i % k == 0 || i % m == 0)
            ++total;
    }
    printf("%d", total);
}
