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
        int size, k;
        cin>>size>>k;
        vector<int> vec(size);
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        int rem=0;
        for(int i=0; i<size; i++)
        {
            int num=i-rem;
            if(num+1==vec[i])
            {
                continue;
            }
            else
            {
                rem++;
            }
        }
        int ans=rem/k;
        if(rem%k!=0)
        {
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}