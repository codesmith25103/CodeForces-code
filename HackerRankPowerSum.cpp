#include <bits/stdc++.h>
using namespace std;
typedef long long ll;                              
int solve(int sum, int k, int num)
{
    if(sum==0)
    {
        return 1;
    }
    if(sum<0)
    {
        return 0;
    }
    if(pow(num, k)>sum)
    {
        return 0;
    }
    int res=pow(num, k);
    int inc=solve(sum-res, k, num+1);
    int exc=solve(sum, k, num+1);
    int ans=inc+exc;
    return ans;
}
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        int sum, k;
        cin>>sum>>k;
        cout<<solve(sum, k, 1)<<endl;;
    }
    return 0;
}