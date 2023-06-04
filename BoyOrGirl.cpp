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
        set<char> s1;
        for(int i=0; i<str.size(); i++)
        {
            s1.insert(str[i]);
        }
        if(s1.size()%2==0)
        {
            
            cout<<"CHAT WITH HER!"<<endl;
        }
        else 
        {
            cout<<"IGNORE HIM!"<<endl;   
        }
    }
    return 0;
}