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
        int size, x;
        cin>>size>>x;
        vector<ll> vec(size);
        ll sum=0;
        int flag=0;
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
            sum+=vec[i];
        }
        vector<pair<ll, ll>> vec1;
        for(int i=0; i<size; i++)
        {
            if(vec[i]%x==0)
            {
                pair<ll, ll> p1={vec[i]/x, x};
                vec1.push_back(p1);
            }
            else 
            {
                flag=1;
                break;
            }
        }
        int count=0;
        for(int i=0; i<vec1.size(); i++)
        {
            sum+=(vec1[i].first)*vec1[i].second;
            if(flag==0 && vec1[i].first%x==0)
            {
                pair<ll, ll>p1={vec1[i].first/x, vec1[i].second*x};
                vec1.push_back(p1);
            }
            else
            {
                flag=1;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}