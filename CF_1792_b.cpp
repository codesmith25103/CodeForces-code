#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int a1, a2, a3, a4;
    cin>>a1>>a2>>a3>>a4;
   cout<<a1+min(a2,a3)*2+min(a1+1,abs(a2-a3)+a4)<<endl;
 

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