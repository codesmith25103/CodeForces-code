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
        ll a,b;
        cin>>a>>b;
        ll x,y;
        cin>>x>>y;
        ll ans=abs(x-y)*a;
        // cout<<ans<<endl;
        ll m=min(x, y);
        // cout<<m<<endl;
        ans+=(m*b);
        ll ans1=ans;
        ans=0;
        ll ans2=0;
        if(x>1)
        {
            ans2+=(x-1)*a;
        }
        cout<<ans2<<endl;
        if(y>1)
        {
            ans2+=(y-1)*a;
        }
        cout<<ans2<<endl;
        ans2+=b;
        cout<<min(ans1, ans2)<<endl;
    }
    return 0;
}