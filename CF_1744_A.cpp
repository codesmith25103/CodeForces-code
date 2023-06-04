#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int size;
    cin>>size;
    unordered_map<int, char> umap;
    vector<int> vec(size);
    for(int i=0; i<size; i++)
    {
        cin>>vec[i];
    }
    string str;
    cin>>str;
    for(int i=0; i<size; i++)
    {
        if(umap.find(vec[i])!=umap.end())
        {
             res=umap[str[i]];
            int rem=vec[i];
            if(res==rem)
            {
                continue;
            }
            else
            {
                cout<<str[i]<<" "<<res<<" "<<rem<<endl;;
                cout<<"NO"<<endl;
                return;
            }
        }
        else
        {
            umap[vec[i]]=str[i];
        }
    }
    cout<<"YES"<<endl;
    return;
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