#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
   int  size;
    cin>>size;
    vector<int> vec(size);
    for(int i=0; i<size; i++)
    {
        cin>>vec[i];
    }
    int res=vec[0]; 
    if(size==1)
    {
        cout<<0<<endl;
        return;
    }
    int count=0;
    for(int i=1; i<size; i++)
    {
        if(vec[i]%2==vec[i-1]%2)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return;
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