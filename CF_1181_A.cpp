#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(int n, int m, int &count)
{
    if(n==m)
    {
        return count;
    }
    if(n>m)
    {
        return -1;
    }
    count++;
    if(solve(n*2, m, count)!=-1 || solve(n*3, m, count)!=-1)
    {
        return count;
    }
    count--;
    return -1;
}
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        int n, m;
        cin>>n>>m;
        int count=0;
        cout<<solve(n, m, count)<<endl;
    }
    return 0;
}