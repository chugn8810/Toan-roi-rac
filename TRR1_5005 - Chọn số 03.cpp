#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int m, n, p;
    cin >> m >> n >> p;
    int ketqua = 0;
    ketqua = (n % p) + 1;
    if (ketqua > m)
        cout << 0;
    else
        cout << ketqua;
}
