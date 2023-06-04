#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
       int size;
        cin>>size;
        int even=0, odd=0;
        vector<int> vec(size);
        int m=INT_MAX;
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
            if(vec[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
            m=min(m, vec[i]);
        }
        if(even==size)
        {
            cout<<"YES"<<endl;
            return;
        }
        if(odd==size)
        {
            cout<<"YES"<<endl;
            return;
        }
        if(m%2==1)
        {
            cout<<"YES"<<endl;
            return;
        }
        cout<<"NO"<<endl;
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