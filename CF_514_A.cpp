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
        ll num;
        cin>>num;
        string str=to_string(num);
        // cout<<str<<endl;
        for(int i=0; i<str.size(); i++)
        {
            if(i==0)
            {
                if(str[i]=='9')
                {
                    continue;                    
               }
            }
            char res1=str[i];
            char res2='9'-str[i]+'0';
            // cout<<res1<<" "<<res2<<endl;
            str[i]=min(res1, res2);
        }
        cout<<str<<endl;
    }
    return 0;
}