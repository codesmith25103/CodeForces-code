#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int size;
    cin>>size;
        unordered_map<string, ll> umap;
        ll m1, m2, m3 ,m4;
        m1=m2=m3=m4=2000001;
        umap["00"]=m1;
        umap["01"]=m2;
        umap["10"]=m3;
        umap["11"]=m4;
        for(int i=0; i<size;  i++)
        {
            string str;
            ll num;
            cin>>num>>str;
            umap[str]=min(num, umap[str]);
        }
        if(umap["11"]==m1)
        {
            if(umap["01"]==m1  || umap["10"]==m1)
            {
                cout<<-1<<endl;
                return;
            }
        }
        ll ans=umap["11"];
        ll res1=umap["01"]+umap["10"];
        cout<<min(ans, res1)<<endl;
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