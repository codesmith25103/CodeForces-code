#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int day;
    cin>>day;
    unordered_map<int, int> umap;
    int d=1;
    while(d<=day)
    {
        int size;
        cin>>size;
        for(int i=0; i<size; i++)
        {
            int element;
            cin>>element;
            umap[element]=day;
        }           
        d++;
    }
    d=1;
    vector<int> ans;
    while(d<=day)
    {
        for(auto &x:umap)
        {
            if(x.second==d)
            {
                cout<<d.first<<endl;
                break;
            }
        }
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