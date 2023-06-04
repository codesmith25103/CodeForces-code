#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    int n=1e6 + 100;
    vector<int> vec(n);
    for(int i=2; i<n; i++)
    {
        if(vec[i]==0)
        {
            vec[i]=i;
            for(int j=i*i; j<n; j+=i)
            {
                if(vec[j]==0)
                vec[j]=i;
            }
    }
    while (t--)
    {
        int prg, algo;
        cin>>prg>>algo;
        if(prg==1 || algo==1)
    {
        cout<<"YES"<<endl;
    }
        else if(prg<=algo)
        {
            cout<<"NO"<<endl;
        }
        else if(vec[prg]<algo)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
}