#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;
void sinh(vector<int> a, int m, int n)
{
    while (n--)
    {
        int j = m - 1;
        while (a[j] == 1 && j >= 0)
        {
            j--;
        }
        if (j < 0)
        {
            cout << 0 << endl;
            continue;
        }
        a[j] = 1;
        for (int i = j + 1; i < m; i++)
        {
            a[i] = 0;
        }
        for (int i = 0; i < m; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sinh(a, m, n);
}
