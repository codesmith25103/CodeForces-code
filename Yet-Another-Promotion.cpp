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
        ll a, b, n , m;
        cin>>a>>b>>n>>m;
        if(a>b)
        {
            int res=n/(m+1);
            int rem=n%(m+1);
            int ans=a*m*res+b*rem;
            cout<<ans<<endl;
        }
        else
        {
            int res=n/(m+1);
            int rem=n%(m+1);
            int ans=a*m*res+a*res;
            cout<<ans<<endl;
        }
    }
    return 0;
}   