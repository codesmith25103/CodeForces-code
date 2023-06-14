#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int size;
        cin>>size;
        vector<int> vec(size);
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        int count=0;
        for(int i=size-2; i>=0; i--)
        {
            while(vec[i]>=vec[i+1] && vec[i]>0)
            {
                count++;
                vec[i]=vec[i]/2;
            }
            if(vec[i]==0 && vec[i]==vec[i+1])
            {
                cout<<-1<<endl;
                return;
            }

        }
        cout<<count<<endl;
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