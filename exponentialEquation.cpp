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
        int n;
        cin>>n;
        if(n%2==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<n/2<<" "<<1<<endl;
        }
    }
    return 0;
}