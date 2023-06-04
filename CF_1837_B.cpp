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
        string str;
        cin>>str;
        int flag=-1;
        int last=-1;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]!='?')
            {
                last=i;
            }
        }
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='?')
            {
             
                cout<<'0';
            }
            else 
            {
                flag=i;
                break;
            }
        }
        if(flag==-1)
        {
            cout<<endl;
            continue;
        }
        char res='a';
        for(int i=flag; i<=last; i++)
        {
            if(str[i]=='?')
            {
            
                cout<<res;
            }
            else
            {
               
                res=str[i];
                cout<<res;
            }
        }
        for(int i=last+1; i<str.size(); i++)
        {
            cout<<'1';
        }
        cout<<endl;
        
    }
    return 0;
}