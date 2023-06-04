#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(set<char> &s1)
{
    string str;
    cin>>str;
    for(int i=0; i<str.size(); i++)
    {
        char res=str[i];
        if(s1.find(str[i])==s1.end())
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    int i=0;
    int j=str.size()-1;
    while(i<=j)
    {
        if(str[i]!=str[j])
        {
            cout<<"NO"<<endl;
            return;
        }
        i++;
        j--;
    }
    cout<<"YES"<<endl;

}
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    set<char> s1={'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y'};
    int t = 1;
    while (t--)
    {
        solve(s1);
        
    }
    return 0;
}