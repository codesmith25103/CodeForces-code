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
        vector<pair<string, int>> vec;
        for(int i=0; i<size; i++)
        {
            string str;
            int point;
            cin>>str>>point;
            pair<string, int> p1;
            p1={str, point};
            vec.push_back(p1);
        }
        unordered_map<string, int> umap;
        for(auto &x:vec)
        {
            umap[x.first]+=x.second;
        }
        int point=INT_MIN;
        string ans="";
        for(auto &x:umap)
        {
            point=max(point, x.second);
        }
        int count=0;
        for(auto &x:umap)
        {
            if(x.second==point)
            {
                count++;
                ans=x.first;
            }
        }
        for(int i=0; i<vec.size(); i++)
        {
            cout<<vec[i].first<<endl;
        }
        if(count==1)
        {
            cout<<ans<<endl;
        }
        else
        {
            unordered_map<string, int> umap1;
            for(int i=0; i<vec.size(); i++)
            {
                cout<<vec[i].first<<endl;
                umap1[vec[i].first]+=vec[i].second;
                if(umap[vec[i].first]==point)
                {
                    ans=vec[i].first;
                    break;
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}