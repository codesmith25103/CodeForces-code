#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin>>t;
    while (t--)
    {
        string str;
        cin>>str;
        int count=1;
        int ans=0;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='L')
            {
                count++;
                ans=max(count, ans);
            }
            else
            {
                count=1;
            }
        }
        cout<<max(ans, count)<<endl;
    }
    return 0;
}