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
        string str;
        cin>>str;
        char res=str[0];
        int ans=1;
        int m=1;
        for(int i=1; i<str.size(); i++)
        {
            if(res==str[i])
            {
                m++;
                ans=max(m, ans);
            }
            else
            {
                m=1;
                res=str[i];
                ans=max(m, ans);
            }
        }
        cout<<ans+1<<endl;
    }
    return 0;
}