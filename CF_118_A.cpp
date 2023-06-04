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
        string str;
        cin>>str;
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        string ans;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y')
            {
                continue;
            }
            else
            {
                ans+=".";
                ans+=str[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}