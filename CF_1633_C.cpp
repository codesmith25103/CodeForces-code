#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
        ll hc, dc, hm, dm, k ,w ,a;
        cin>>hc>>dc>>hm>>dm>>k>>w>>a;
        int count=0;
        for(int i=0; i<=k; i++)
        {
            ll c1=i;
            ll c2=k-i;
            ll hct=hc+c1*a;
            ll dct=dc+c2*w;
            ll a1=hct/dm;
            if(hct%dm!=0)
            {
                a1++;
            }
            ll a2=hm/dct;
            if(hm%dct!=0)
            {
                a2++;
            }
            if(a1>=a2)
            {
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
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