#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int size;
        cin>>size;
        map<int, int> umap;
        for(int i=0; i<size; i++)
        {
            int element;
            cin>>element;
            umap[element]++;
        }
        vector<int> ans;
        for(auto &x:umap)
        {
            if(x.second==1)
            {
                cout<<-1<<endl;
                return;
            }
        }
        int add=0;
        for(auto &x:umap)
        {
            // for(int i=x.second+add; i>add; i--)
            // {
            //     cout<<i<<" ";
            // }
            for(int i=add+1; i<=x.second+add; i++)
            {
                if(i==add+1)
                {
                    cout<<x.second+add<<" ";
                }
                else
                {
                    cout<<i-1<<" ";
                }
            }
            add+=x.second;
        }
        cout<<endl;
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