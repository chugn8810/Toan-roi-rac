#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int h, m, n, t;
    cin >> h >> m >> n >> t;
    int ketqua = 0;
    ketqua = (n * m) * (t - 1) + 1;
    if (ketqua > h)
        cout << 0;
    else
        cout << ketqua;
}
