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
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        ll count=0;
        ll ans=0;
        ll flag=0;
        ll sum=0;
        for(int i=0; i<size; i++)
        {
            sum+=abs(vec[i]);
            if(vec[i]>0)
            {
               
                if(count>0)
                {
                    ans++;
                }
                count=0;
                flag=0;
                continue;
            }
            if(flag==0 && vec[i]==0)
            {
                continue;
            }
            if(vec[i]<0)
            {
                
                count++;
                flag=1;
                continue;
            }
            if(flag==1 && vec[i]==0)
            {
               
                count++;
                continue;
            }

        }
        if(count>0)
        {
            ans++;
        }
        cout<<sum<<" "<<ans<<endl;
    }
    return 0;
}