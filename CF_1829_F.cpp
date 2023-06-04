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
        int m, n;
        cin>>m>>n;
        unordered_map<int, int> umap;
        for(int i=0; i<n; i++)
        {
            int e1, e2;
            cin>>e1>>e2;
            umap[e1]++;
            umap[e2]++;
        }
        vector<int> vec;
        unordered_map<int, int> umap1;
        for(auto &x:umap)
        {
            if(x.second==1)
            {
                continue;
            }
            else
            {
                vec.push_back(x.first);
            }
        }
        int ans1=vec.size()-1;
        int ans2=(m-vec.size())/ans1;
        cout<<ans1<<" "<<ans2<<endl;

    }
    return 0;
}