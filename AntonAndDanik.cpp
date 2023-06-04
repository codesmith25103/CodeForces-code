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
        int a=0, d=0;
        for(int i=0; i<size; i++)
        {
            if(str[i]=='A')
            {
                a++;
            }
            else
            {
                d++;
            }
        }
        if(a>d)
        {
            cout<<"Anton"<<endl;
        }
        else if(d>a)
        {
            cout<<"Danik"<<endl;
        }
        else
        {
            cout<<"Friendship"<<endl;
        }
    }
    return 0;
}