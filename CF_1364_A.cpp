#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int size;
    cin>>size;
    int k;
    cin>>k;
    int sum=0;
    vector<int> vec(size);
    for(int i=0; i<size; i++)
    {
        cin>>vec[i];
        sum+=vec[i];
    }
    int i1=size-1;
    int i2=0;
    if(sum%k!=0)
    {
        cout<<size<<endl;
        return;
    }
    int ans=0;
    int c1=size;
    int c2=size;
    int sum1=sum;
    int sum2=sum;
    while(i1>=0)
    {
        sum1-=vec[i1];
        i1--;
        c1--;
        if(sum1%k!=0)
        {
            break;
        }
    }
    while(i2<size)
    {
        sum2-=vec[i2];
        i2++;
        c2--;
        if(sum2%k!=0)
        {
            break;
        }
    }
    // cout<<c1<<" "<<c2<<endl;
    if(c1==0 && c2==0)
    {
        cout<<-1<<endl;
        return;
    }
    cout<<max(c1, c2)<<endl;
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