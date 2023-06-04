#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
      ll size, quer;
      cin>>size>>quer;
      vector<ll> vec(size);
      for(int i=0; i<size; i++)
      {
        cin>>vec[i];
      }  
      sort(vec.begin(), vec.end(), greater<int>());
      vector<ll> ans;
      ll sum=0;
      for(int i=0; i<size; i++)
      {
        sum+=vec[i];
        ans.push_back(sum);
      }
      for(int i=0; i<quer; i++)
      {
        ll q1, le;
        cin>>q1>>le;
        q1--;
        ll res=q1-le;
        if(res<0)
        {
            cout<<ans[q1]<<endl;
        }
        else
        {
            ll sum1=ans[q1]-ans[res];
            cout<<sum1<<endl;
        }
      }
    }
    return 0;
}