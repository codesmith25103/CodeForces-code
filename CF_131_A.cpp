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
        int flag=0;
        int uppercase_count=0;
        for(int i=0; i<str.size(); i++)
        {
            if(i==0)
            {
                if(str[i]>='a' && str[i]<='z')
                {
                    flag=1;
                }
            }
            if(str[i]>='A' && str[i]<='Z')
            {
                uppercase_count++;
            }
        }
        if(flag==1)
        {
            if(uppercase_count==str.size()-1)
            {
                str[0]=str[0]-32;
                for(int i=1; i<str.size(); i++)
                {
                    str[i]=str[i]+32;
                }
                cout<<str<<endl;
            }
            else 
            {
                cout<<str<<endl;
            }
        }
        else
        {
            if(str.size()==uppercase_count)
            {
                for(int i=0; i<str.size(); i++)
                {
                    str[i]=str[i]+32;
                }
                cout<<str<<endl;
            }
            else
            {
                cout<<str<<endl;
            }
        }
    }
    return 0;
}