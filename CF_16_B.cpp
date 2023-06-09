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
        int n, m;
        cin>>n>>m;
        int ans=0;
        vector<pair<int, int>> vec(m);
        for(int i=0; i<m; i++)
        {
            int e1, e2;
            cin>>e1>>e2;
            pair<int, int> p1={e2,e1};
            vec.push_back(p1);
        }
        sort(vec.begin(), vec.end(), greater<pair<int, int>>());
        for(int i=0 ; i<m; i++)
        {
            if(n==0)
            {
                break;
            }
            if(vec[i].second<=n)
            {
                ans+=vec[i].first*vec[i].second;
                n-=vec[i].second;
                continue;
            }
            if(vec[i].second>n)
            {
                ans+=vec[i].first*n;
                break;
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}