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
        long long int n;
        cin>>n;
        string str=to_string(n);
        int count=0;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='4' || str[i]=='7')
            {
                count++;
            }
        }
        if(count==4 || count==7)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}