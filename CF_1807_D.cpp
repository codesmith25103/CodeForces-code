#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll size,  q;
        cin>>size>>q;
        vector<ll> vec(size);
        ll sum=0;
        for(ll i=0; i<size; i++)
        {
            cin>>vec[i];
            sum+=vec[i];
        }
        for(ll i=0; i<q; i++)
        {
            ll l , r, k;
            cin>>l>>r>>k;
            ll sum1=sum;
            for(ll j=l; j<=r; j++)
            {
                sum1=sum1+k-vec[j];
            }
            if(sum1&1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}