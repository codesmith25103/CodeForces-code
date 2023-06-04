#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
        int days;
        cin>>days;
        unordered_map<int, int> umap;
        for(int i=0;i<days; i++)
        {
            int size;
            cin>>size;
            for(int j=0; j<size; j++)
            {
                int element;
                cin>>element;
                umap[element]=i;
            }
        }
        vector<int> ans;
        int day=0;
        for(auto &x:umap)
        {
            if(x.second==day)
            {
                ans.push_back(x.first);
                continue;
            }
            day++;
        }
        if(ans.size()==days)
        {
            cout<<-1<<endl;
        }
        else 
        {
            for(int i=0; i<days; i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
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
        solve();
    }
    return 0;
}