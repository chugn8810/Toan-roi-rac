#include <iostream>
#include <vector>
#include <map>
using namespace std;
int checktoancuc = 0;
map<int, int> mp;
vector<int> kq(100, 0);
void quaylui(int i, int n)
{
    for (int j = 0; j <= 1; j++)
    {
        kq[i] = j;
        if (mp.count(i) && mp[i] != kq[i])
            continue;
        if (n == i)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << kq[i] << " ";
            }
            cout << endl;
            checktoancuc++;
        }
        else
        {
            quaylui(i + 1, n);
        }
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    while (k--)
    {
        int x, y;
        cin >> x >> y;
        mp[x] = y;
    }
    quaylui(1, n);
    if (checktoancuc == 0)
        cout << 0 << endl;
}
