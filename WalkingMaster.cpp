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
        int a, b, c,d;
        cin>>a>>b>>c>>d;
        if(d-b<0)
        {
            cout<<-1<<endl;
        }
        else if((c-a)==(b-d))
        {
            cout<<c-a<<endl;
        }
        else if(b==d)
        {
            int res=c-a;
            if(res<=0)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<c-a<<endl;
            }
        }
        else
        {
            if(b-a>d-c)
            {
                cout<<a+(d-b)-c<<endl;
            }
        }

    }
    return 0;
}