#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int size;
        cin>>size;
        string str;
        cin>>str;
        sort(str.begin(), str.end());
        char temp=str[size-1];
        int ans=temp-'a'+1;
        cout<<ans<<endl;
    }
    return 0;
}