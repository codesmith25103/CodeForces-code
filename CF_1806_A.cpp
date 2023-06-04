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
        long long int x1, x2, y1, y2;
        cin>>x1>>y1>>x2>>y2;
        if(y1==y2)
        {
            if(x1>=x2)
            {
                cout<<x1-x2<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else if(y1>y2)
        {
            cout<<"answer"<<endl;
            cout<<-1<<endl;
        }
        else
        {
            long long int res=y2-y1;
            x1+=res;
            if(x1>=x2)
            {
                long long int ans=res+(x1-x2);
                cout<<ans<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}