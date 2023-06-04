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
        int size, k;
        cin>>size>>k;
        vector<pair<int, int>> vec;
        for(int i=0; i<size; i++)
        {
            int l, r;
            cin>>l>>r;
            if(l<=k && k<=r)
            {
                pair<int, int> p;
                p.first=l;
                p.second=r;
                vec.push_back(p);
            }
        }
        unordered_map<int, int> umap;
        for(int i=0; i<vec.size(); i++)
        {
            pair<int, int> p1=vec[i];
            for(int i=p1.first; i<=p1.second; i++)
            {
                umap[i]++;
            }
        }
        int count=0;
        for(auto &x:umap)
        {
            if(x.second==vec.size())
            {
                count++;
            }
        }
        if(count==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}