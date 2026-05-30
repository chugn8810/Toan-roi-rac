#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, check = 0, total = 0;
    cin >> n >> t;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            total++;
            if ((i * j) % 4 != 0)
            {
                check++;
            }
        }
    }
    if (total >= check + t)
        cout << check + t;
    else
        cout << 0;
}
