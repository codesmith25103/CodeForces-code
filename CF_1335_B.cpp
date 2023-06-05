#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin>>t;
    while (t--)
    {
        int n, a, b;
        cin>>n>>a>>b;
        int count=0;
        string ans;
        for(int i=0; i<n; i++)
        {
            if(count>=b)
            {
               count=0;
            }
            char res=char('a'+count);
            ans.push_back(res);
            count++;
        }
        cout<<ans<<endl;
    }
    return 0;
}