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
        int res=(size*(size+1))/2;
        res+=res%size;
        vector<int> vec;
        int i=size;
        while(i>0)
        {
            if(i==1)
            {
                vec.push_back(res);
                // cout<<res<<" ";
                break;

            }
            vec.push_back(i);
            // cout<<i<<" ";
            res-=i;
            i--;
        }
        for(int j=size-1; j>=0; j--)
        {
            cout<<vec[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}