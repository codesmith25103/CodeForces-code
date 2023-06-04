#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll size, q;
        cin>>size>>q;
        vector<ll> vec;
        vector<ll> ans;
        ll sum=0;
        for(ll i=0; i<size; i++)
        {
            ll element; 
            cin>>element;
            vec.push_back(element);
            sum+=element;
            ans.push_back(sum);
        }
        // for(int i=0; i<size; i++)
        // {
        //     cout<<ans[i]<<" ";
        // }
        // cout<<endl;
        for(ll i=0; i<q; i++)
        {
            ll l, r, k;
            cin>>l>>r>>k;
            ll rem;
            if(l-2<0)
            {
                rem=ans[r-1];
            }
            else
            {
                rem=ans[r-1]-ans[l-2];
            }
            ll new1=(r-l+1)*k;
            if((sum-rem+new1)%2==0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}