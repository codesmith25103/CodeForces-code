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
        vector<ll> vec1(size);
        vector<ll> vec2(size);
        for(int i=0; i<size; i++)
        {
            cin>>vec1[i];
        }
        for(int j=0; j<size; j++)
        {
            cin>>vec2[j];
        }
        vector<pair<ll, ll>> ans;
        for(int i=0; i<size; i++)
        {
            pair<ll, ll> p1={vec2[i], vec1[i]};
            ans.push_back(p1);
        }
        ll ans1=0;
        // for(int i=0; i<size; i++)
        // {
        //     cout<<ans[i].first<<" "<<ans[i].second<<endl;
        // }
        sort(ans.begin(), ans.end());
        for(int i=0; i<size; i++)
        {
            if(i==size-1)
            {
                ans1+=ans[i].second;
            }
            else
            {
            ll res=ans[i].first+ans[i].second;
            ans1+=res;
            }
        }
        cout<<ans1<<endl;
    }
    return 0;
}