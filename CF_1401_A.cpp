#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n, k;
    cin>>n>>k;
    if(n>=k)
    {
        if(n%2==k%2)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
        return;
    }
    else
    {
        cout<<k-n<<endl;
        return;
    }
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