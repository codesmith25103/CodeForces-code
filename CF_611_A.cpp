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
        string str1, str2, str3;
        cin>>str1>>str2>>str3;
        if(str3=="month")
        {
            if(str1=="31")
            {
                cout<<7<<endl;
                return 0;
            }
            if(str1=="30")
            {
                cout<<11<<endl;
                return 0;
            }
            else{
                cout<<12<<endl;
                return 0;
            }
        }
        if(str3=="week")
        {
            if(str1=="6" || str1=="5")
            {
                cout<<53<<endl;
                return 0;
            }
            else
            {
                cout<<52<<endl;
                return 0;
            }
        }
    }
    return 0;
}