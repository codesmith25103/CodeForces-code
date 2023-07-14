#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int size, k;
        cin>>size>>k;
        int odd=0, even=0;
        vector<int> vec(size);
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        for(int i=0; i<size; i++)
        {
            if(vec[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(odd==0)
        {
            cout<<"No"<<endl;
            return;
        }
        k--;
        odd--;
        
        if(k==0)
        {
            cout<<"Yes"<<endl;
            return;
        }
        if(k<=even)
        {
            cout<<"Yes"<<endl;
            return;
        }
        k=k-even;
        if(k%2==0)
        {
            cout<<"Yes"<<endl;        
            return;
        }
        else
        {
            if(even>0 && odd>=2)
            {
                cout<<"Yes"<<endl;
                return;
            }
            else
            {
                cout<<"No"<<endl;
                return;
            }
        }
       
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