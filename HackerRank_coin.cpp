#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve1(int n, int size, vector<int> &vec, int i=0)
{
    if(i==size)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    int ans=0;
    for(int j=i; j<size; j++)
    {
        ans+=solve1(n-vec[j], size, vec, j);
    }
    return ans;
}
void solve()
{
    int n, size;
    cin>>n>>size;
    vector<int> vec(size);
    for(int i=0; i<size; i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());
    int ans=solve1(n, size, vec);
    cout<<ans<<endl;
}
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}