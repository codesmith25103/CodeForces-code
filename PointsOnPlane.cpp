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
        long long int num;
        cin>>num;
        
       
            long long int res=sqrt(num);
            if(res*res==num)
            {
                cout<<res-1<<endl;
            }
            else
            {
                cout<<res<<endl;
            }
        
    }
    return 0;
}