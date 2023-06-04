#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        int n, m;
        cin>>n>>m;
        int res=n;
        int ans=n;
        while(res>=m)
        {
            int rem=res%m;
            int c=res/m;
            res=res/m;
            res+=rem;
             ans+=c;
        }
        cout<<ans<<endl;
    }
    return 0;
}