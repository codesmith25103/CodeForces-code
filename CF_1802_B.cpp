#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin>>n;
    vector<int> vec;
    int flag=1;
    for(int i=0; i<n; i++)
    {
        int element;
        cin>>element;
        vec.push_back(element);
        if(vec[i]==2)
        {
            flag=0;
        }
    }
    int count=0;
    int res=0;
    int answer=0;
    int temp=0;
    for(int i=0; i<n; i++)
    {
        if(vec[i]==1)
        {
            res++;
            
        }
        if(vec[i]==2)
        {
            count=count+res;
            res=0;
        }
        if(count==0)
        {
            temp=0;
        }
        else
        {
            temp=count/2+1;
        }
        answer=max(answer,temp+res);
    }
    cout<<answer<<endl;
}
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}