#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
     ll num;
    cin>>num;
    for(ll i=1; i<10000; i++)
    {
        ll num1=i*i*i;
        if(num1>num)
        {
            break;
        }
        // for(ll j=i; j<10000; j++)
        // {
        //     ll num2=j*j*j;
        //     if(num1+num2==num)
        //     {
        //         cout<<"YES"<<endl;
        //         return;
        //     }
        //     if(num1+num2>num)
        //     {
        //         break;
        //     }
        // }
        ll l=i;
        ll h=10000;
        
        while(l<=h)
        {
            ll mid=(l+h)/2;
            ll num2=mid*mid*mid;
            if(num1+num2==num)
            {
                cout<<"YES"<<endl;
                return;
            }
            else if(num1+num2>num)
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
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