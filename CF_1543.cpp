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
        ll size;
        cin>>size;
        vector<ll> vec(size);
        ll sum=0;
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
            sum+=vec[i];
        }
    ll res1=sum%size;
        ll res2=size-res1;
        cout<<res1*res2<<endl;

    }
    return 0;
}