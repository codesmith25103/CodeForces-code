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
        int n, a, b;
        cin>>n>>a>>b;
        string str;
        cin>>str;
        if(str[a-1]==str[b-1])
        {
            cout<<0<<endl;
            continue;
        }
        int  m1=INT_MAX;
        for(int i=a; i<str.size(); i++)
        {
            if(str[a-1]!=str[i])
            {
                m1=abs(a-i-1);
                break;
            }
        }
        int m2=INT_MAX;
        for(int j=a-2; j>=0; j--)
        {
            if(str[j]!=str[a-1])
            {
                m2=abs(a-j-1);
                break;
            }
        }
        cout<<min(m1, m2)<<endl;
    }
    return 0;
}