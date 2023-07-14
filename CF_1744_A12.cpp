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
        int flag=0;
        if(str[0]=='1')
        {
            flag=1;
        }
        for(int i=1; i<size; i++)
        {
            if(str[i]=='0')
            {
                cout<<'+';
            }
            else
            {
                if(flag==1)
                {
                    cout<<'-';
                    flag=0;
                }
                else
                {
                    cout<<'+';
                    flag=1;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}