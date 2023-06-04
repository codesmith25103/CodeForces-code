#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int l, r, k;
    cin>>l>>r>>k;
    int a , b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<0<<endl;
        return;
    }
    if(abs(a-b)>=k)
    {
        cout<<1<<endl;
        return;
    }
    int m=-1;
    if(abs(a-l)>=k)
    {
        if(abs(l-b)>=k)
        {
            cout<<2<<endl;
            return;
        }
        if(abs(l-r)>=k)
        {
            if(abs(r-b)>=k)
            {
                m=3;
            }
        }
    }
    if(abs(a-r)>=k)
    {
        if(abs(r-b)>=k)
        {
            cout<<2<<endl;
            return;
        }
        if(abs(l-r)>=k)
        {
            if(abs(l-b)>=k)
            {
                m=3;
            }
        }
    }
    cout<<m<<endl;
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