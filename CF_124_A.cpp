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
        int n, a, b;
        cin>>n>>a>>b;
        if(a+b==n || a+b==n-1 || a+b>n)
        {
            cout<<n-a<<endl;
        }
        else    
        {
            cout<<b+1<<endl;
        }
    }
    return 0;
}