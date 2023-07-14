#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll a, b;
    cin>>a>>b;
    ll ans=0;
    if(b==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    cout<<a<<" "<<a*b<<" "<<a*(b+1)<<endl;
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