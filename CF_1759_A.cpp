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
        string check="Yes";
        int flag=0;
        int j=-1;
        if(str[0]=='Y')
        {
            j=0;
        }
        else if(str[0]=='e')
        {
            j=1;
        }
        else if(str[0]=='s')
        {
            j=2;
        }
        if(j==-1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]==check[j])
            {
                j++;
                if(j>2)
                {
                    j=0;
                }
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}