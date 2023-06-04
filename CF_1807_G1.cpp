#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll size;
    cin>>size;
    ll c1=0;
    vector<ll> vec(size);
    for(ll i=0; i<size; i++)
    {
        cin>>vec[i];
        if(vec[i]==1)
        {
            c1++;
        }
    }  
    if(size==1 && c1==1)
    {
        cout<<"YES"<<endl;
        return;
    }
    if(c1==0)
    {
        cout<<"NO"<<endl;
        return;
    }
    sort(vec.begin(), vec.end());
    ll sum=vec[0];
    for(ll i=1; i<size; i++)
    {
        if(sum>=vec[i])
        {
            sum+=vec[i];
        }
        else 
        {
            cout<<"NO"<<endl;
            return;
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