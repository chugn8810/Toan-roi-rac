#include <iostream>
#include <vector>
#include <map>
using namespace std;
int checktoancuc = 0;
vector<int> kq(100, 0), dadung(100, 0), mp(22, 0);
void quaylui(int i, int n, int k, int t)
{
    for (int j = 1; j <= n; j++)
    {
        if (dadung[j] == 0)
        {
            kq[i] = j;
            if (i > 1 && kq[i - 1] > kq[i])
            {
                continue;
            }
            dadung[j] = 1;
            if (k == i && kq[k] == t)
            {
                for (int i = 1; i <= k; i++)
                {
                    cout << kq[i] << " ";
                }
                cout << endl;
                checktoancuc++;
            }
            else
            {
                quaylui(i + 1, n, k, t);
            }
            dadung[j] = 0;
        }
    }
}
int main()
{
    int n, k, t;
    cin >> n >> k >> t;
    quaylui(1, n, k, t);
    if (checktoancuc == 0)
        cout << 0 << endl;
}
