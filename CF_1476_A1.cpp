#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n, k;
    cin>>n>>k;
    if(k==1)
    {
        cout<<1<<endl;
        return;
    }
    if(k%n==0)
    {
        cout<<k/n<<endl;
        return;
    }
    if(k/n==0)
    {
        cout<<n/k+1<<endl;
        return ;
    }
    int res=k/n;
    cout<<k/n+1<<endl;
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