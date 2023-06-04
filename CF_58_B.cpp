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
        int n;
        cin>>n;
        int res=n;
        vector<int> vec;
        for(int i=n; i>0; i--)
        {
            if(res%i==0)
            {
                vec.push_back(i);
                res=i;
            }
        }
        for(int i=0; i<vec.size(); i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}