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
        int n, x1, y1, x2, y2;
        cin>>n>>x1>>y1>>x2>>y2;
        int d1=abs(x1-x2);
        int d2=abs(y1-y2);
        int m1=max(d1, d2);
        if(m1<=1)
        {
            cout<<0<<endl;
            continue;







            
        }
        cout<<m1-1<<endl;

    }
    return 0;
}