#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve(vector<int>& vec, int i, int n, vector<int> &dp)
{
    if (n == 0)
    {
        return 0;
    }
    if (i == vec.size())
    {
        return INT_MIN;
    }
    if (n < 0)
    {
        return INT_MIN;
    }
    if (dp[i] != -1)
    {
        return dp[i];
    }
    int inc = 1 + solve(vec, i, n - vec[i-1], dp);
    int exc = solve(vec, i + 1, n, dp);
    return dp[i] = max(inc, exc);
}

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    cout.sync_with_stdio(0);

    int t = 1;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end()); // Move sorting here
        int ans = 0;
        vector<int> dp(4, -1);
        ans = solve(vec, 0, n, dp);
        cout << ans << endl;
    }
    return 0;
}
