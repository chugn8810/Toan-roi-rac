#include <bits/stdc++.h>
using namespace std;
int tong = 0;
vector<int> nhiphan(50, 0);
void sinh(int t, int n)
{
    while (1)
    {
        int check = 0;
        for (int k = 1; k <= t; k++)
        {
            if (nhiphan[k] == 1)
            {
                check++;
            }
        }
        if (check > n || check < n)
        {
            tong += 1;
        }
        int j = t;
        while (nhiphan[j] == 1)
            j--;
        if (j <= 0)
            break;
        nhiphan[j] = 1;
        for (int k = j + 1; k <= t; k++)
        {
            nhiphan[k] = 0;
        }
    }
}
int main()
{
    int t, n;
    cin >> t >> n;
    sinh(t, n);
    cout << tong + 1;
}
