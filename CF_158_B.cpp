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
        int ans=0;
        ans+=umap[4];
        umap[4]=0;
        int res=min(umap[1], umap[3]);
        ans+=res;
        umap[1]-=res;
        umap[3]-=res;
        ans+=umap[3];
        if(umap[2]%2==0)
        {
            ans+=umap[2]/2;
            umap[2]=0;
        }
        else
        {
            ans+=umap[2]/2;
            umap[2]=1;
        }
        for(auto &x:umap)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }
        if(umap[1]<=2)
        {
            ans++;
            cout<<ans<<endl;
        }
        else
        {
            umap[1]-=2;
            while(umap[1]>0)
            {
                ans++;
                umap[1]-=4;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}