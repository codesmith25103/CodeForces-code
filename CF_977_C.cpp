#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n, k;
        cin>>n>>k;
        int m=1e9;
        vector<int> vec(n);
        for(int i=0; i<n; i++)
        {
            cin>>vec[i];
            m=min(vec[i], m);
        }
        map<int, int> umap;
        for(int i=0; i<n; i++)
        {
            umap[vec[i]]++;
            
        }
        if(k==0)
        {
            if(m>1)
            {
                cout<<1<<endl;
                return;
            }
        }
        for(auto &x:umap)
        {
            // cout<<x.first<<" "<<x.second<<endl;
            k-=x.second;
            cout<<k<<endl;
            if(k==0)
            {
                cout<<x.first<<endl;
                return;
            }
        }
        cout<<-1<<endl;
        return;
}
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}