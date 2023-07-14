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
        map<int, vector<int>> umap;      
        for(int i=0; i<size; i++)
        {
            int e1, e2;
            cin>>e1>>e2;
            umap[e1].push_back(e2);
        }
        ll sum=0;
        for(auto &[x,y]:umap)
        {
            sort(y.begin(), y.end(), greater<int>());   
            for(int i=0; i<min(x, static_cast<int>(y.size())); i++)
            {
                sum+=y[i];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}