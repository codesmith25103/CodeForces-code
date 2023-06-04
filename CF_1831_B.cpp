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
        int size;
        cin>>size;
        unordered_map<int, int> umap;
        for(int i=0; i<2*size; i++)
        {
            int element;
            cin>>element;
            umap[element]++;
        }
        int ans=0;
        for(auto &x:umap)
        {
            cout<<x.first<<" "<<x.second<<endl;
            ans=max(ans, x.second);
        }
        cout<<ans<<endl;
    }
    return 0;
}