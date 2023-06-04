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
        int size;
        cin>>size;
        string str;
        cin>>str;
        int countX=0, countx=0;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='X')
            {
                countX++;
            }
            else 
            {
                countx++;
            }
        }
        if(countX==countx)
        {
            cout<<0<<endl;
            cout<<str<<endl;
        }
        else if(countX>countx)
        {
            cout<<(countX-countx)/2<<endl;
            int dif=(countX-countx)/2;
            int count=0;
            for(int i=0; i<size; i++)
            {
                if(str[i]=='X')
                {
                    str[i]='x';
                    count++;
                    if(count==dif)
                    {
                        break;
                    }
                }
            }
            cout<<str<<endl;
        }
        else 
        {
            cout<<(countx-countX)/2<<endl;
            int dif=(countx-countX)/2;
            int count=0;
            for(int i=0; i<size; i++)
            {
                if(str[i]=='x')
                {
                    str[i]='X';
                    count++;
                    if(count==dif)
                    {
                        break;
                    }
                }
            }
            cout<<str<<endl;
        }
    }
    return 0;
}