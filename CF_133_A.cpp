#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    string str;
    cin>>str;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9')
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    return;
}
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}