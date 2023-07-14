#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int size;
    cin>>size;
    string str;
    cin>>str;
    int r=0;
    int b=0;
    for(int i=0; i<size; i++)
    {
        if(str[i]!='W')
        {
            if(str[i]=='R')
            {
                r++;
            }
            if(str[i]=='B')
            {
                b++;
            }
        }
        else
        {
            if(r==0 && b==0)
            {
                continue;
            }
            else if(r==0 && b!=0)
            {
                cout<<"NO"<<endl;
                return ;
            }
            else if(b==0 && r!=0)
            {
                cout<<"NO"<<endl;
                return;
            }
            r=0;
            b=0;
        }
    }
    if(r==0 && b!=0)
    {
        cout<<"NO"<<endl;
        return;
    }
    if(b==0 && r!=0)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
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