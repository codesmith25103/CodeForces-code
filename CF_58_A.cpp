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
        vector<char> vec={'h', 'e', 'l', 'l', 'o'};
        int x=0;
        int size=vec.size();
        int flag=0;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]==vec[x])
            {
                x++;
                if(x==size)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
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