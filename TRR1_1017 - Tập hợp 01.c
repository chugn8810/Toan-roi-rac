#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int m;
    scanf("%d", &m);
    int a[1005], b[1005], p1 = 0, p2 = 0;
    int th1[1005], th2[1005];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < m; i++)
    {
        if (a[i] == 1)
        {
            th1[p1++] = i + 1;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (b[i] == 1)
        {
            th2[p2++] = i + 1;
        }
    }
    int total = p1, tmp = p1;
    for (int i = 0; i < p2; i++)
    {
        int check = 0;
        for (int j = 0; j < tmp; j++)
        {
            if (th1[j] == th2[i])
            {
                check = 1;
                break;
            }
        }
        if (check == 0)
        {
            th1[p1++] = th2[i];
            total++;
        }
    }
    for (int i = 0; i < total; i++)
    {
        for (int j = i + 1; j < total; j++)
        {
            if (th1[i] > th1[j])
            {
                int tmp2 = th1[i];
                th1[i] = th1[j];
                th1[j] = tmp2;
            }
        }
    }
    printf("%d\n", total);
    for (int i = 0; i < total; i++)
    {
        printf("%d ", th1[i]);
    }
}
