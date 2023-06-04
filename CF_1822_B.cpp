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
        ll size;
        cin>>size;
        vector<ll>vec(size);
        for(int i=0; i<size ; i++)
        {
            cin>>vec[i];
        }
        sort(vec.begin(), vec.end());
        ll m1=vec[0]*vec[1];
        ll m2=vec[size-1]*vec[size-2];
        cout<<max(m1, m2)<<endl;
    }
    return 0;
}