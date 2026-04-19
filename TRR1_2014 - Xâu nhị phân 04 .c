#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    vector<long long> dp(m + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= m; i++)
    {
        dp[i] = 0;
        for (int j = 1; j <= n; j++)
        {
            if (i - j >= 0)
            {
                dp[i] += dp[i - j];
            }
            else if (i - j == -1)
            {
                dp[i] += 1;
            }
        }
    }
    long long phancan = pow(2, m );
    cout << phancan - dp[m];
}
