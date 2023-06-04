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
        int size;
        cin>>size;
        char x;
        cin>>x;
        string str;
        int ans=-1;
        int count=0;
        cin>>str;
        int j=-1, start=-1, i=0;
        while(i!=start)
        {
            if(str[i]==x)
            {
                if(start==-1)
                {
                    start=i;
                    j=i;
                }
                else 
                {
                    if(j==-1)
                    {
                        j=i;
                    }
                }
                count++;
            }
            else if(str[i]=='g')
            {
                ans=max(count, ans);
                j=-1;
                count=0;
            }
            else 
            {
                if(j!=-1)
                {
                    count++;
                }
            }
            i++;
            if(i==size)
            {
                i=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}