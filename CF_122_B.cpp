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
        int m4=0, m7=0;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='4')
            {
                m4++;
            }
            if(str[i]=='7')
            {
                m7++;
            }
        }
        if(m4==0 && m7==0)
        {
            cout<<-1<<endl;
        }
        else if(m4==m7)
        {
            cout<<4<<endl;
        }
        else if(m4>m7)
        {
            cout<<4<<endl;
        }
        else
        {
            cout<<7<<endl;
        }

    }
    return 0;
}