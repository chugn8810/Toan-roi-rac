#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int c[16][16];
bool da_chon[16];
int p[16], best_p[16];
long long max_productivity = -1;
int max_val_row[16]; // Lưu giá trị năng suất lớn nhất của mỗi hàng làm cận

// Tính cận trên: tổng năng suất lớn nhất khả thi của các công việc còn lại
long long tinh_can(int i)
{
    long long can = 0;
    for (int j = i; j < n; ++j)
    {
        can += max_val_row[j];
    }
    return can;
}

void nhanh_can(int i, long long current_p)
{
    // Nếu tổng năng suất hiện tại + cận trên <= max_productivity, cắt tỉa
    if (current_p + tinh_can(i) <= max_productivity)
        return;

    if (i == n)
    {
        if (current_p > max_productivity)
        {
            max_productivity = current_p;
            for (int k = 0; k < n; ++k)
                best_p[k] = p[k];
        }
        return;
    }

    for (int j = 0; j < n; ++j)
    {
        if (!da_chon[j])
        {
            da_chon[j] = true;
            p[i] = j;
            nhanh_can(i + 1, current_p + c[i][j]);
            da_chon[j] = false; // Backtrack
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (!(cin >> n))
        return 0;

    for (int i = 0; i < n; ++i)
    {
        max_val_row[i] = -1;
        for (int j = 0; j < n; ++j)
        {
            cin >> c[i][j];
            if (c[i][j] > max_val_row[i])
                max_val_row[i] = c[i][j];
        }
    }

    nhanh_can(0, 0);

    cout << max_productivity << endl;
    for (int i = 0; i < n; ++i)
        cout << best_p[i] + 1 << (i == n - 1 ? "" : " ");
    return 0;
}
