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
       stack<char> st;
       int count=0;
       for(int i=0; i<str.size(); i++)
       {
            if(str[i]=='(')
            {
                st.push(str[i]);
            }
            else
            {
                if(!st.empty())
                {
                    st.pop();
                    count++;
                }
            }
       } 
       cout<<count*2<<endl;
    }
    return 0;
}