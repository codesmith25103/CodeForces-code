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
        ll ans=0;
        while(size>0)
        {
            ans+=size;
            size=size/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}