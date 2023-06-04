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
        int one=0;
        int zero=0;
        int size;
        cin>>size;
        string str;
        cin>>str;
        int flag=0;
        int count=0;
        for(int i=0; i<size-1; i++)
        {
            if(str[i]!=str[i+1])
            {
                count++;
            }
            if(str[i]=='1')
            {
                one++;
            }
            else 
            {
                zero++;
            }
        }
        string str1=str;
        sort(str1.begin(), str1.end());
        if(str1==str)
        {
            cout<<0<<endl;
        }
        else if(one==size)
        {
            cout<<0<<endl;
        }
        else if(zero==size)
        {
            cout<<1<<endl;
        }
        else if(str[0]=='0' && str[size-1]=='0')
        {
            cout<<count-1<<endl;
        }
        else if(str[0]=='0' && str[size-1]=='1')
        {
            cout<<count-1<<endl;
        }
        else 
        {
            cout<<count<<endl;
        }
    }
    return 0;
}