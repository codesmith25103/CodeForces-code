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
        int n, m, a, b;
        cin>>n>>m>>a>>b;
        if(a*m<=b)
        {
            cout<<a*n<<endl;
            return 0;
        }
        int res=n/m;
        int ans=res*b;
        int rem=n%m;
        int ans1=min(b, rem*a);
        cout<<ans+ans1<<endl;
        return 0;
    }
    return 0;
}