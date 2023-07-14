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
        int a, b, c, d, e, f;
        cin>>a>>b>>c>>d>>e>>f;
        int ans=1;
        if(c>a && e>a)
        {
            // cout<<1<<endl;
            int res=min(c, e);
            ans+=abs(a-res);
        }
        if(c<a && e<a)
        {
            // cout<<2<<endl;
            int res=max(c, e);
            ans+=abs(a-res);
        }
        if(b>d && b>f)
        {
            // cout<<3<<endl;
            int res=max(d, f);
            ans+=abs(b-res);
        }
        if(b<d && b<f)
        {
            // cout<<4<<endl;
            int res=min(d, f);
            ans+=abs(b-res);
        }
        cout<<ans<<endl;
    }
    return 0;
}