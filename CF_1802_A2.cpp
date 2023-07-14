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
        vector<int> vec(size);
        int p=0, n=0;
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
            if(vec[i]>0)
            {
                p++;
            }
            else
            {
                n++;
            }
        }
        int ans=0;
        for(int i=0; i<p; i++)
        {
            ans++;
            cout<<ans<<" ";
        }
        for(int i=0; i<n; i++)
        {
            ans--;
            cout<<ans<<" ";
        }
        cout<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<1<<" ";
            cout<<0<<" ";
            p--;
        }
        int res=0;
        for(int i=0; i<p; i++)
        {
            res++;
            cout<<res<<" ";
        }
        cout<<endl;

    }
    return 0;
}