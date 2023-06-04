#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(vector<vector<int>> &vec, int i, int j, int n, int m)
{
    if(i<0 || i>=n || j<0 || j>=m)
    {
        return;
    }   
    
}
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin>>n>>m;
        vector<vector<int>> vec( n , vector<int> (m, 0)); 
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>vec[i][j];
            }
        }

    }
    return 0;
}