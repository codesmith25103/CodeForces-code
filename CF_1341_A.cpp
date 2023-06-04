#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int size, a, b, c, d;
    cin>>size>>a>>b>>c>>d;
    int res1=(a+b)*size;
    int res2=(a-b)*size;
    int res3=(c+d)*size;
    int res4=(c-d)*size;
    if((res1>=res3 && res1<=res4) || (res2>=res3 && res2<=res4))
    {
        cout<<"YES"<<endl;
        return;
    }
    if((res2<=res4 || res2<=res4) && (res>=))

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