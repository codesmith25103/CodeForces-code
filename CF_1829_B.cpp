#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(vector<vector<int>> &vec, int n, int m, int i, int j)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
    {
        return 0;
    }
    if(vec[i][j]==0)
    {
        return 0;
    }
    int cost = vec[i][j];
    cost += solve(vec, n, m, i + 1, j) + solve(vec, n, m, i - 1, j) + solve(vec, n, m, i, j + 1) + solve(vec, n, m, i, j - 1);
    return cost;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> vec(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> vec[i][j];
            }
        }
        int ans=0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int cost = solve(vec, n, m, i, j);
                ans = max(cost, ans);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
