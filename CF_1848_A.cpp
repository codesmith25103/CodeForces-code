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
        int n, m, k;
        cin>>n>>m>>k;
        int x, y;
        cin>>x>>y;
        string ans="YES";
        for(int i=0; i<k; i++)
        {
            int x1, y1;
            cin>>x1>>y1;
            if((x+y)%2==(x1+y1)%2)
            {
                ans="NO";
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}