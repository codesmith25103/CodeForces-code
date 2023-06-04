#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n, a, b;
    cin>>n>>a>>b;
    if(a!=0 && b!=0)
    {
        cout<<-1<<endl;
        return;
    }
    if(a==0 && b==0)
    {
        cout<<-1<<endl;
        return;
    }
    int rem=a+b;
    if((n-1)%rem!=0)
    {
        cout<<-1<<endl;
        return;
    }
    int res=1;
    int count=0;
    int flag=0;
    for(int i=1; i<=n-1; i++)
    {
        cout<<res<<" ";
        count++;
        if(count==rem)
        {
            if(flag==0)
            {
                count++;
                flag=1;
            }
            res+=count;
            count=0;
        }
    }
    cout<<endl;
    
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