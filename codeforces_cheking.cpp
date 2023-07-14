#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    cout<<setprecision(10);
    int n, base, height;
    cin>>n>>base>>height;
    vector<int> vec(n);
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());
    int q=0;
    vector<int> vec2;
    for(int i=0; i<n; i++)
    {
        if(q>vec[i])
        {
            vec2.push_back(q-vec[i]);
        }
        q=vec[i]+height;
    }
    double ans=base*height*n;
    ans/=2;
    double c=0;
    for(int  i=0; i<vec2.size(); i++)
    {
        c+=vec2[i]*vec2[i];
    }
    c=c*base;
    c=c/2;
    c=c/height;
    ans=ans-c;
    cout<<ans<<endl;
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