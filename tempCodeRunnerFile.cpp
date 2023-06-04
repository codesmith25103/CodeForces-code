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
        int count=0;
        int res=vec[0];
        int m=0;
        count++;
        for(int i=1; i<size; i++)
        {
            if(res<=vec[i])
            {
                count++;
                m=max(count, m);
            }
            else
            {
                count=0;
                res=vec[i];
            }
        }
        cout<<count<<endl;
    }
    return 0;
}