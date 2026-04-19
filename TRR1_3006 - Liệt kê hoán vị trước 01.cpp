#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    if (!(cin >> n))
        return 0;
    vector<int> a(105);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int i = n - 1;
    while (i >= 1 && a[i] <= a[i + 1])
        i--;
    if (i == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    int j = n;
    while (a[j] >= a[i])
        j--;
    swap(a[i], a[j]);
    reverse(a.begin() + i + 1, a.end() + n + 1);
    for (int k = 1; k <= n; k++)
        cout << a[k] << (k == n ? "" : " ");
    cout << endl;

    return 0;
}
