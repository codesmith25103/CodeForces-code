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
        int ans=0;
        int count=0;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='(')
            {
                count++;
            }
            else 
            {
                if(str[i]==')')
                {
                    if(count>=1)
                    {
                        count--;
                    }
                    else
                    {
                        ans++;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}