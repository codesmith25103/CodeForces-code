#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    string s1, s2, s3;
        cin>>s1>>s2>>s3;
        // cout<<s1<<s2<<s3<<endl;
        if(s1[0]==s1[1] && s1[1]==s1[2])
        {
            if(s1[0]!='.')
            {
                cout<<s1[0]<<endl;
                return;
            }
        }
        if(s2[0]==s2[1] && s2[1]==s2[2])
        {
            if(s2[0]!='.')
            {
                cout<<s2[0]<<endl;
                return;
            }
        }
        if(s3[0]==s3[1] && s3[1]==s3[2])
        {
            if(s3[0]!='.')
            {
                cout<<s3[0]<<endl;
                return;
            }
        }
        if(s1[0]==s2[0] && s2[0]==s3[0])
        {
            if(s1[0]!='.')
            {
                cout<<s1[0]<<endl;
                return;
            }
        }
        if(s1[1]==s2[1] && s2[1]==s3[1])
        {
            if(s1[1]!='.')
            {
                cout<<s1[1]<<endl;
                return;
            }
        }
        if(s1[2]==s2[2] && s2[2]==s3[2])
        {
            if(s1[2]!='.')
            {
                cout<<s1[2]<<endl;
                return;
            }
        }
        if(s1[0]==s2[1] && s2[1]==s3[2])
        {
            if(s1[0]!='.')
            {
                cout<<s1[0]<<endl;
                return;
            }
        }
        if(s1[2]==s2[1] && s2[1]==s3[0])
        {
            if(s3[0]!='.')
            {
                cout<<s3[0]<<endl;
                return;
            }
        }
        cout<<"DRAW"<<endl;

}
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}