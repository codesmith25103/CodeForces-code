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
        int num;
        cin>>num;
        string str=to_string(num);
        int flag=0;
     
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='4' || str[i]=='1')
            {
             
                continue;
            }
            else
            {
                cout<<"NO"<<endl;
             
                return 0;
            }
        }
        int count=2; 
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='4')
            {
                count++;
                if(count==3)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
            if(str[i]=='1')
            {
                count=0;
            }
        }
        cout<<"YES"<<endl;
    }
    return 0;
}