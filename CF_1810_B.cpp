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
        int num;
        cin>>num;
        if(num%2==0)
        {
            cout<<-1<<endl;
        }
        else if(num==1)
        {
            cout<<1<<endl;
        }
        else 
        {
            cout<<30<<" ";
            for(int i=30; i>=1; i--)
            {
                if((num>>i) & 1)
                {
                    cout<<2<<" ";
                }
                else
                {
                    cout<<1<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}