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
        if(n<=10)
        {
            cout<<n<<endl;
        }
        else if(n<=100)
        {
            cout<<10+n/10-1<<endl;
        }
        else if(n<1000)
        {
            cout<<19+n/100-1<<endl;
        }
        else if(n<10000)
        {
            cout<<28+n/1000-1<<endl;
        }
        else if(n<100000)
        {
            cout<<37+n/10000-1<<endl;
        }
        else if(n<1000000)
        {
            cout<<46+n/100000-1<<endl;
        }
        else if(n<10000000)
        {
            cout<<55+n/1000000-1<<endl;
        }
    }
    return 0;
}