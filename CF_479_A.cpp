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
        int a, b, c;
        cin>>a>>b>>c;
        // vector<int> vec={a, b, c};
        // for(int i=0; i<vec.size(); i++ )
        // {
        //     cout<<vec[i]<<endl;
        // }
        // sort(vec.begin(), vec.end());
        int res=max((a+b)*c, a*b*c);
        res=max(res, a+b+c);
        res=max(res, a*(b+c));
        res=max(res, (a*c)+b);
        res=max(res, a*b+c);
        cout<<res<<endl;
    }
    return 0;
}