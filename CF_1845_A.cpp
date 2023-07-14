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
        int n, k, x;
        cin>>n>>k>>x;
        if(x!=1)
        {
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++)
            {
                cout<<1<<" ";
            }
            cout<<endl;
            return;
        }
        if(x==1)
        {
            if(k>1)
            {
                if(n%2==0)
                {
                    cout<<"YES"<<endl;
                    for(int i=0; i<n/2; i++)
                    {
                        
                    }
                }
            }
        }
    }
    return 0;
}