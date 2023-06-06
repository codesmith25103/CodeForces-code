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
         int size, x;
    cin>>size>>x;
    vector<int> vec(size);
    for(int i=0; i<size; i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());
    int rem=size-x;
    if(rem==0)
    {
        cout<<vec[0]<<endl;
        return 0;
    }
    int res=vec[rem];
    int res1=vec[rem-1];
    if(res==res1)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<vec[rem]<<endl;
    }
    return 0;
    }
    return 0;
}