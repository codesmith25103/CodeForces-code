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
        int size;
        cin>>size;
        vector<string> vec(size);
        vector<int> ans;
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        for(int i=size-1; i>=0; i--)
        {
            int count=0;
            for(int j=i-1; j>=0; j--)
            {
                if(vec[i]>vec[j])
                {
                    count++;
                }
            }
            ans.push_back(count);
        }
        for(int i=size-1; i>=0; i--)
        {
            cout<<ans[i]<<endl;
        }
    }
    return 0;
}