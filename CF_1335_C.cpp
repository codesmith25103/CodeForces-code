#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int size;
    cin>>size;
    vector<int> vec(size);
    for(int i=0; i<size; i++)
    {
        cin>>vec[i];
    }
    if(size==1)
    {
        cout<<0<<endl;
        return;
    }
    unordered_map<int, int> umap;
    for(int i=0; i<size; i++)
    {
        umap[vec[i]]++;
    }
    int m1=0;
    for(auto &x:umap)
    {
        m1=max(m1, x.second);
    }
    int m2=umap.size();
    // if(m1!=1)
    // {
    //     m1--;
    // }
    // cout<<m1<<" "<<m2<<endl;
    if(m1>=m2)
    {
        m1--;
    }
    int ans=min(m1, m2);
    cout<<ans<<endl;
}
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}