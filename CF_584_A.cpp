#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n, t;
        cin>>n>>t;
        if(n==1 && t==10)
        {
            cout<<-1<<endl;
            return;
        }
        if(n<=4)
        {
            int res=pow(10, n-1);
            for(int i=res; i<res+100; i++)
            {
                if(i%t==0)
                {
                    cout<<i<<endl;
                    return;
                }
            }
        }
        vector<int> vec;
        vec.push_back(1);
        for(int i=0; i<n-1; i++)
        {
            vec.push_back(0);
        }
        if(t==0 || t==1 || t==2 || t==5 || t==4 || t==8 || t==10)
        {
            for(int i=0; i<vec.size(); i++)
            {
                cout<<vec[i];
            }
            return;
        }
        if(t==9 || t==3 || t==6)
        {
            for(int i=0; i<vec.size()-1; i++)
            {
                cout<<vec[i];
            }
            cout<<8;
            return;
        }
        if(t==7)
        {
            for(int i=0; i<n; i++)
            {
                cout<<7;
            }
            return;
        }
}
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}