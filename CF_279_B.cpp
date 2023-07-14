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
       int size,k;
       cin>>size>>k;
       vector<int> vec(size);
       for(int i=0; i<size; i++)
       {
            cin>>vec[i];
       }
       int res=vec[k-1];
       int count=0;
       for(int i=0; i<size; i++)
       {
            if(vec[i]>=res && vec[i]>0)
            {
                count++;
            }
       }
        cout<<count<<endl;
    }
    return 0;
}