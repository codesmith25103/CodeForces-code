#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        string str;
        cin>>str;
        int ans=0;
        unordered_map<char, int> umap;
        for(int i=0; i<str.size(); i++)
        {
            umap[str[i]]++;
            if(umap.size()>3)
            {
                ans++;
                umap.clear();
                umap[str[i]]++;
            }
        }
        if(umap.size()>0)
        {
            // for(auto &x:umap)
            // {
            //     cout<<x.first<<" "<<x.second<<endl; 
            // }
            // cout<<1<<endl;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}