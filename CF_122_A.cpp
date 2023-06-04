#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t=1;
    while (t--)
    {
        int n;
        cin>>n;
        int c4=0;
        int res=n;
        int count=0;
        while(n>0)
        {
            int rem=n%10;
            if(rem==4 || rem==7)
            {
                c4++;
            }
            count++;
            n/=10;
        }
        if(c4==count)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(res%4==0 || res%7==0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        cout<<"NO"<<endl;
        return 0;
    }
    return 0;
}