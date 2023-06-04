#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int size;
    cin>>size;
    if(size%2==0)
    {
        cout<<"NO"<<endl;
        return;
    }
    int j=size+1;
    int i=size;
    cout<<"YES"<<endl;
    while(i>0)
    {
        cout<<i<<" "<<j<<endl;
        j++;
        i-=2;
    }
    i=size-1;
    while(j<=2*size)
    {
        cout<<i<<" "<<j<<endl;
        j++;
        i-=2;
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