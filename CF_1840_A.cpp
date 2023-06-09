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
        int flag=1;
        string ans;
        for(int i=1; i<size; i++)
        {
            if(flag==1 && res==str[i])
            {
                
                ans.push_back(res);
                flag=0;
            }
            else if(flag==0)
            {
                res=str[i];
                flag=1;
            }
       }
       cout<<ans<<endl;
    }
    return 0;
}