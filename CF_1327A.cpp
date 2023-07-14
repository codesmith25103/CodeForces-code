#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
   ll n, k;
   cin>>n>>k;
   if(k*k>n)
   {
    cout<<"NO"<<endl;
    return;
   }
   if(n%2==k%2)
   {
    cout<<"YES"<<endl;
    return;
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