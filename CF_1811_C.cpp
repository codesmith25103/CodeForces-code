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
        vector<int> vec(size-1);
        for(int i=0; i<size-1; i++)
        {
            cin>>vec[i];
        }
        vector<int> ans(size);
        ans[0]=vec[0];
        for(int i=1; i<size-1; i++)
        {
            ans[i]=min(vec[i], vec[i-1]);
        }
        ans[size-1]=vec[size-2];
        for(int i=0; i<size; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}