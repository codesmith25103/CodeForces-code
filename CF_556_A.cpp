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
        stack<char> st;
        for(int i=0; i<str.size(); i++)
        {
            if(st.empty())
            {
                st.push(str[i]);
            }
            else
            {
                if(st.top()!=str[i])
                {
                    st.pop();
                }
                else
                {
                    st.push(str[i]);
                }
            }
        }
        int count=0;
        while(!st.empty())
        {
            ++count;
            st.pop();
        }
        cout<<count<<endl;
    }
    return 0;
}