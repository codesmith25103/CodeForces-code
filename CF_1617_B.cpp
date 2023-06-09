#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int num;
    cin>>num;
    int i=2;
    int j=num-3;
    while(i<j)
    {
        if(__gcd(i, j)==1)
        {
            cout<<i<<" "<<j<<" "<<1<<endl;
            return;
        }
        i++;
        j--;
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