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
        string str;
        cin>>str;
        unordered_map<string, int> umap;
        for(int i=0; i<size-1; i++)
        {
            string str1=str.substr(i, 2);
            // cout<<str1<<endl;
            umap[str1]++;
        }        
        int m=0;
        string ans;
        for(auto &x:umap)
        {
            // cout<<x.first<<" "<<x.second<<endl;
            int res=x.second;
            if(res>m)
            {
                ans=x.first;
                m=res;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}