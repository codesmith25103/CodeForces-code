#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        ll size, t, k;
        cin>>size>>t>>k;
        vector<ll> vec(size);
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        ll ans=0;
        ll count=0;
        for(int i=0; i<size; i++)
        {
            if(vec[i]<=t)
            {
                count++;
            }
            else 
            {
                if(count!=0)
                {
                    if(count>=k)
                    {
                        ++ans;
                        int res=count-k;
                        ans+=res;
                        count=0;
                    }
                    else
                    {
                        count=0;
                        continue;
                    }
                }
            }
        }   
        if(count!=0)
        {
            if(count>=k)
            {
                ++ans;
                int res=count-k;
                ans+=res;
                count=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}