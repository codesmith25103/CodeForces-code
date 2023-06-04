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
       //converting all character into lowercase
       for(int i=0; i<size; i++)
       {
            if(str[i]>='A' && str[i]<='Z')
            {
                str[i]=str[i]+32;
            }
            else
            {
                continue;
            }
       }
       string ans="meow";
       string check;
       check+=str[0];
       for(int i=1; i<size; i++)
       {
            if(str[i]==str[i-1])
            {
                continue;
            }
            else
            {
                check+=str[i];
            }
       }
       if(check==ans)
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