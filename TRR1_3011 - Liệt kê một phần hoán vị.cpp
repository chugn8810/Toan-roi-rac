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
        int j = m - 2;
        while (a[j] >= a[j + 1] && j >= 0)
        {
            j--;
        }
        if (j < 0)
        {
            cout << 0 << endl;
            continue;
        }
        int vitri = 0, max = 999999999;
        for (int i = j + 1; i < m; i++)
        {
            if (max > a[i] && a[i] > a[j])
            {
                vitri = i;
                max = a[i];
            }
        }
        swap(a[j], a[vitri]);
        reverse(a.begin() + j + 1, a.end());
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
