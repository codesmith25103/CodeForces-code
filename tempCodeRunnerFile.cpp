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
        if(k>n)
        {
            cout<<"NO"<<endl;
        }
        else 
        {
            n=n-(k-1);
            if(n%2==0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }  
    }
    return 0;
}