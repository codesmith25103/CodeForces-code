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
        int size;
        cin>>size;
        vector<int> vec(size);
        int c1=0;
        int sum=0;
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
            sum+=vec[i];
            if(c1==-1)
            {
                c1++;
            }
        }
        int ans=0;
        if(sum<0)
        {
            ans=abs(0-sum);
            c1-=ans;
        }
        if(c1%2==1)
        {
            ans++;
        }
        cout<<ans<<endl;


    }
    return 0;
}