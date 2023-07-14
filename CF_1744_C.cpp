#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
     int size;
        cin>>size;
        char res;
        cin>>res;
        string str;
        cin>>str;
        if(res=='g')
        {
            cout<<0<<endl;
            return;
        }
        int flag=1;
        int i=0;
        int point=0;
        while(true)
        {
            if(str[i]==res && flag==1)
            {
                flag=0;
            }
            if(flag==0)
            {
                if(str[i]=='g')
                {
                    point=i;
                    break;
                }
            }
            i++;
            if(i==size)
            {
                i=0;
            }
        }
        i=point+1;
        if(i==size)
        {
            i=0;
        }
        flag=1;
        int ans=0;
        int count=1;
        while(flag!=2)
        {
            if(str[i]=='g')
            {
                ans=max(ans, count);
                count=0;
                i++;
                continue;
            }
            i++;
            if(i==size)
            {
                i=0;
            }
            count++;
            if(i==point)
            {
                flag=2;
            }
        }
        cout<<ans<<endl;
}
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
       solve();
    }
    return 0;
}