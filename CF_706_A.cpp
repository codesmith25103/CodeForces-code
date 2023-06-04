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
        vector<int> vec(size);
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        sort(vec.begin(), vec.end());
        vector<int> st(1e5+1, 0);
        int res=0;
        int j=0;
        for(int i=0; i<st.size(); i++)
        {
            if(j<vec.size() && i==vec[j])
            {
                res++;
                j++;
            }
            st[i]=res;
        }
        // for(int i=0; i<100; i++)
        // {
        //     cout<<vec[i]<<endl;
        // }
        int m;
        cin>>m;
        for(int i=0; i<m;i++)
        {
            int res;
            cin>>res;
            cout<<st[res]<<endl;
        }
    }
    return 0;
}