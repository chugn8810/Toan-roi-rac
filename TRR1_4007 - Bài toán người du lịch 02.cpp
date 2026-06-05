#include <bits/stdc++.h>
using namespace std;
int n;
int a[35][35];
int min_out[35];
int sum_min_out = 0;
int total = 2e9;
int x[35], best_x[35];
bool check[35];
vector<pair<int, int>> adj[35];
void backtrack(int i, int sum, int current_min_out_sum)
{
    int u = x[i - 1];
    for (auto &edge : adj[u])
    {
        int v = edge.second;
        int cost = edge.first;
        if (!check[v])
        {
            int lower_bound = sum + cost + current_min_out_sum - min_out[u];

            if (lower_bound < total)
            {
                check[v] = true;
                x[i] = v;

                if (i == n)
                {

                    if (sum + cost + a[v][1] < total)
                    {
                        total = sum + cost + a[v][1];
                        for (int k = 1; k <= n; k++)
                        {
                            best_x[k] = x[k];
                        }
                    }
                }
                else
                {
                    backtrack(i + 1, sum + cost, current_min_out_sum - min_out[u]);
                }
                check[v] = false;
            }
        }
    }
}
int main()
{
    cin >> n;
    sum_min_out = 0;
    for (int i = 1; i <= n; i++)
    {
        min_out[i] = 2e9;
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (i != j)
            {
                min_out[i] = min(min_out[i], a[i][j]);
                adj[i].push_back({a[i][j], j});
            }
        }
        if (min_out[i] == 2e9)
            min_out[i] = 0;
        sort(adj[i].begin(), adj[i].end());
        sum_min_out += min_out[i];
    }
    x[1] = 1;
    check[1] = true;
    best_x[1] = 1;
    backtrack(2, 0, sum_min_out);
    cout << total << "\n";
    for (int i = 1; i <= n; i++)
    {
        cout << best_x[i] << " ";
    }
    return 0;
}
