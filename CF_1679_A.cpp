#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
        ll n;
        cin>>n;
        if(n%2==1)
        {
            cout<<-1<<endl;
            return;
        }
        if(n<4)
        {
            cout<<-1<<endl;
            return;
        }
        if(n==4)
        {
            cout<<1<<" "<<1<<endl;
            return;
        }
        if(n==6)
        {
            cout<<1<<" "<<1<<endl;
            return;
        }
        if(n==8)
        {
            cout<<2<<" "<<2<<endl;
            return;
        }
        if(n%4==0 && n%6==0)
        {
            cout<<n/6<<" "<<n/4<<endl;
            return;
        }
        if(n%4==0 && n%6==4)
        {
            cout<<n/6+1<<" "<<n/4<<endl;
            return;
        }
        if(n%4==0 && n%6==2)
        {
            cout<<n/6+1<<" "<<n/4<<endl;
            return;
        }
        if(n%4==2 && n%6==2)
        {
            cout<<n/6+1<<" "<<n/4<<endl;
            return;
        }
        if(n%6==0 && n%4==2)
        {
            cout<<n/6<<" "<<n/4<<endl;
            return;
        }
        if(n%6==4 && n%4==2)
        {
            cout<<n/6+1<<" "<<n/4<<endl;
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