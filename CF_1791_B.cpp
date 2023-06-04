#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int size;
    cin>>size;
    string str;
    cin>>str;
    int res1=0, res2=0;
    for(int i=0; i<size; i++)
    {
            if(str[i]=='U')
            {
                res2++;
            }
            else if(str[i]=='D')
            {
                res2--;
            }
            else if(str[i]=='L')
            {
                res1--;
            }
            else 
            {
                res1++;
            }
            if(res1==1 && res2==1)
            {
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
        return;
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