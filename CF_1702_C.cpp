#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
       int size, k;
        cin>>size>>k;
        vector<int> vec(size);
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        for(int i=0; i<k; i++)
        {
            int flag=0;
            int a, b;
            cin>>a>>b;
            int res=-1;
            for(int j=0; j<size; j++)
            {
                if(vec[j]==a)
                {
                    res=j;
                    break;
                }
            }
            if(res==-1)
            {
                cout<<"NO"<<endl;
                return;
            }
            for(int j=res; j<size; j++)
            {
                if(vec[j]==b)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
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