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
        int l, r;
        cin>>l>>r;
        int ans=0;
        int dif=0;
        int f1=0;
        for(int i=l; i<=r; i++)
        {
            int m1=0, m2=INT_MAX;
            int f2=0;
            int rem=i;
            while(rem!=0)
            {
                int res=rem%10;
                m1=max(m1, res);
                m2=min(m2, res);
                if(dif<=(m1-m2))
                {
                    dif=m1-m2;
                    ans=i;
                    if(dif==9)
                    {
                        f2=1;
                        break;
                    }
                }
                rem/=10;
            }
            if(f2==1)
            {
                f1=1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}