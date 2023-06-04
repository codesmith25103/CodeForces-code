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
        if(str[0]>='a' && str[0]<='z')
        {
            str[0]=str[0]-32;
        }
        cout<<str<<endl;
    }
    return 0;
}