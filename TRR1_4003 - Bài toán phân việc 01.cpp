#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // c[i][j] lưu chi phí công nhân i+1 làm việc j+1
    vector<vector<int>> c(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> c[i][j];
        }
    }

    // Khởi tạo mảng p thủ công thay cho iota
    vector<int> p(n);
    for (int i = 0; i < n; ++i)
    {
        p[i] = i;
    }

    long long min_cost = LLONG_MAX;
    vector<int> best_permutation;

    // Thử tất cả các hoán vị
    do
    {
        long long current_cost = 0;
        for (int i = 0; i < n; ++i)
        {
            current_cost += c[i][p[i]];
        }

        if (current_cost < min_cost)
        {
            min_cost = current_cost;
            best_permutation = p;
        }
    } while (next_permutation(p.begin(), p.end()));

    // Xuất kết quả
    cout << min_cost << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << best_permutation[i] + 1 << (i == n - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}
