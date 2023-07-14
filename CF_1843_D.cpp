#include <bits/stdc++.h>
using namespace std;

void dfs(int node, int parent, vector<long long int> &leafCount, vector<bool> &visited, vector<vector<long long int>> &tree)
{
    visited[node] = true;

    if (tree[node].size() == 1 && parent != -1)
        leafCount[node] = 1;

    for (int child : tree[node])
    {
        if (!visited[child])
        {
            dfs(child, node, leafCount, visited, tree);
            leafCount[node] += leafCount[child];
        }
    }
}

int main()
{
     cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    long long int t;
    t=1;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;
        vector<vector<long long int>> tree(n+1);
        vector<bool> visited(n+1, false);
        vector<long long int> leafCount(n+1, 0);

        for (long long int i = 1; i < n; i++)
        {
            long long int u, v;
            cin >> u >> v;
            int m1=min(u, v);
            int m2=max(u, v);
            tree[m1].push_back(m2);
        }

        dfs(1, -1, leafCount, visited, tree);

        long long int q;
        cin >> q;

        while (q--)
        {
            long long int x, y;
            cin >> x >> y;

            long long int ans = static_cast<long long int>(leafCount[x]) * leafCount[y];
            cout << ans << "\n";
        }
    }

    return 0;
}
