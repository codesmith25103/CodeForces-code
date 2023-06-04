#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        int size;
        cin>>size;
        unordered_map<string, int> umap;
        for(int i=0; i<size; i++)
        {
            string str;
            cin>>str;
            umap[str]++;
        }
        int m=0;
        for(auto &x:umap)
        {
            m=max(x.second, m);
        }
        string ans;
        for(auto &x:umap)
        {
            if(x.second==m)
            {
                ans=x.first;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}