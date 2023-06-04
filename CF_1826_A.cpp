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
        unordered_map<int, int> umap;
        for(int i=0; i<size; i++)
        {
            umap[vec[i]]++;
        }
        int flag=1;
        int ans=-1;
        for(auto &x:umap)
        {
            if(x.first==(size-x.second))
            {
                cout<<x.first<<endl;
                return;
            }
            if(x.first<size-x.second)
            {
                ans=size-x.second;
            }
        }
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