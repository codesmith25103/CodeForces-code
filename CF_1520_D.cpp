#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sum1(ll n)  
{
    return n*(n+1)/2;
}
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll size;
        cin>>size;
        vector<ll> vec(size);
        for(ll i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        unordered_map<ll, ll> umap;
        ll count=0;
        for(ll i=1; i<=size; i++)
        {
            umap[vec[i-1]-i]++;
        }
        for(auto &x:umap)
        {
            count+=sum1(x.second-1);
        }
        cout<<count<<endl;
    }
    return 0;
}