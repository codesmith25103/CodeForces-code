#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int num;
    cin>>num;
    if(num>45)
    {
        cout<<-1<<endl;
        return;
    }
    int ans=0;
    int res=9;
    while(num>res)
    {
        num-=res;
        if(ans==0)
        {
            ans+=res;
            res--;
        }
        else
        {
            ans=ans*10+res;
            res--;
        }
        
    }
    if(ans==0)
    {
        ans+=num;
    }
    else 
    {
        ans=ans*10+num;
    }
    string str=to_string(ans);
    reverse(str.begin(), str.end());
    cout<<str<<endl;
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