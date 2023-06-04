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
        st.push(str[0]);
        for(int i=1; i<str.size(); i++)
        {
            if(st.empty())
            {
                st.push(str[i]);
            }
            else 
            {
                if(st.top()==str[i])
                {
                    st.pop();
                }
                else 
                {
                    st.push(str[i]);
                }
            }
        }
        string str1="";
        while(!st.empty())
        {
            str1+=st.top();
            st.pop();
        }
        reverse(str1.begin(), str1.end());
        cout<<str1<<endl;
    }
    return 0;
}