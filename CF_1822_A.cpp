#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t1 = 1;
    cin >> t1;
    while (t1--)
    {
        int time, size;
        cin>>size>>time;
        vector<int> t(size), f(size);
        int ans=-1;
        int b=-1;
        for(int i=0; i<size; i++)
        {
            cin>>t[i];
        }
        for(int i=0; i<size; i++)
        {
            cin>>f[i];
        }
        for(int i=0; i<size; i++)
        {
           
            if(time>=t[i])
            {
                if(b<=f[i])
                {
                    ans=i+1;
                    b=f[i];
                }
            }
            time--;
        }
        cout<<ans<<endl;
    }
    return 0;
}