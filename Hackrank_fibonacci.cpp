#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using boost::multiprecision::cpp_int;
typedef long long ll;
void solve()
{
    cpp_int t1, t2, t3;
    cin>>t1>>t2>>t3;
    vector<cpp_int> vec(t3+1, 0);
    vec[0]=t1;
    vec[1]=t2;
    for(ll i=2; i<=t3; i++)
    {
        cpp_int res1=vec[i-1];
        cpp_int res2=vec[i-2];
        vec[i]=res1*res1+res2;
    }
    cout<<vec[t3-1]<<endl;
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