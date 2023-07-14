#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int size;
    cin>>size;
    vector<int> vec(size);
    int m1=0;
    for(int i=0; i<size; i++)
    {
        cin>>vec[i];
        m1=max(m1, vec[i]);
    }
    int count=0;
    for(int i=0; i<size; i++)
    {
        if(vec[i]==m1)
        {
            count++;
        }
    }
    if(count==size)
    {
        cout<<-1<<endl;
        return;
    }
    int ans=0;
    for(int i=0; i<size; i++)
    {
        if(vec[i]==m1)
        {
            if(i>0 && vec[i]>vec[i-1])
            {
                cout<<i+1<<endl;
                return;
            }
            if(i<size-1 && vec[i]>vec[i+1])
            {
                cout<<i+1<<endl;
                return;
            }
        }
    }
    cout<<-1<<endl;
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