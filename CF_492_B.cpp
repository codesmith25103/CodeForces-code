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
        double n, l;
        cin>>n>>l;
        vector<double> vec(n);
        for(int i=0; i<n; i++)
        {
            cin>>vec[i];
        }
        sort(vec.begin(), vec.end());
        double ans=0, ans1=0, ans2=0;
        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                ans1=max(ans1, vec[i]-0);
            }
            else if(i==n-1)
            {
                ans2=max(l-vec[i], ans2);
            }
            else
            {
                ans=max(ans, vec[i]-vec[i-1]);
            }
        }
        if(n==1)
        {
            cout<<l<<endl;
            return 0;
        }
        if(n==2 && vec[0]==0 && vec[1]==l)
        {
            cout<<(vec[1]-vec[0])/2<<endl;
        }
        else
        cout<<setprecision(12)<<max(ans1, max(ans2, ans/2))<<endl;
    }
    return 0;
}