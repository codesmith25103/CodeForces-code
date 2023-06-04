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
        int n, k;
        cin>>n>>k;
        if(n%k==0)
        {
            cout<<2<<endl;
            cout<<n-1<<" "<<1<<endl;
        }
        else
        {
            cout<<1<<endl;
            cout<<n<<endl;
        }
    }
    return 0;
}