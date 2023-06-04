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
        int num;
        cin>>num;
        // ll res=num*pow(10, size-1);
        // ll n=num/res;
        // n++;
        // ll ans=
        ll res=pow(10, size-1);
        ll n=num/res;
        n++;
        ll ans=n*res;
        if(n>=10)
        {
            n/=10;
        }
        int count=1;
        int ans1=n;
        while(count!=size)
        {
            ans1=ans1*10+n;
            count++;
        }        
        cout<<ans1-num<<endl;
    }
    return 0;
}