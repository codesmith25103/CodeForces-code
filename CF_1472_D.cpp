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
        ll size;
        cin>>size;
        vector<ll> vec(size);
        for(ll i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        ll alice=0, bob=0;
        sort(vec.begin(), vec.end(), greater<ll> ());
        ll flag=0;
        for(ll i=0; i<size; i++)
        {
            if(flag==0)
            {
                if(vec[i]%2==0)
                {
                    alice+=vec[i];
                }
                flag=1;
                // cout<<alice<<endl;
            }
            else
            {
                if(vec[i]%2==1)
                {
                    bob+=vec[i];
                }
                flag=0;
                // cout<<bob<<endl;
            }
            
        }
        if(alice==bob)
        {
            cout<<"Tie"<<endl;
        }
        else if(alice>bob)
        {
            cout<<"Alice"<<endl;
        }
        else 
        {
            cout<<"Bob"<<endl;
        }
    }
    return 0;
}