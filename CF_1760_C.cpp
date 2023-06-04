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
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        vector<int> vec1=vec;
        sort(vec1.begin(), vec1.end());
        vector<int> ans;
        int max=vec1[size-1];
        for(int i=0; i<size; i++)
        {
            if(vec[i]==max)
            {
                if(vec[i]==vec1[size-2])
                {
                    ans.push_back(0);
                }
                else
                {
                    ans.push_back(vec[i]-vec1[size-2]);
                }
            }
            else 
            {
                ans.push_back(vec[i]-max);
            }
        }
        for(int i=0; i<size; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}