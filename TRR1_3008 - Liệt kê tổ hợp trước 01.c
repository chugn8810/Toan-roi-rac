#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> a(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int j = n - 1;
    while (j > 0 && a[j] == j + 1)
    {
        j--;
    }
    if (a[j] == 1)
    {
        for (int i = 0; i < n; i++)
        {
            a[i] = m - n + i + 1;
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
    else
    {
        a[j]--;
        for (int i = j + 1; i < n; i++)
        {
            a[i] = m - n + i + 1;
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
}   
