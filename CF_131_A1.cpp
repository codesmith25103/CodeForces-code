#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        ll num;
        cin>>num;
        if(num>0)
        {
            cout<<num<<endl;
            return 0;
        }
        ll res1=abs(num%10);
        ll num1=num/10;
        ll res2=abs(num1%10);
        // cout<<res1<<" "<<res2<<endl;
        // cout<<res1<<endl;
        if(res1>=res2)
        {
            cout<<num/10<<endl;
            return 0;
        }
        num1=num1/10;
        cout<<num1*10+(-1*res1)<<endl;
        // cout<<num1*10+res1<<endl;
        return 0;
    }
    return 0;
}