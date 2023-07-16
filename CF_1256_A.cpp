#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int a, b, n, s;
        cin>>a>>b>>n>>s;
        int res=s/n;
        // cout<<res<<endl;
        int temp1=min(res, a);
        // cout<<temp1<<endl;
        int temp2=s-n*temp1;
        // cout<<temp2<<endl;
        if(temp2<=b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}