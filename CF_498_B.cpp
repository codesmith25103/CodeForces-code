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
        int m;
        cin>>m;
        vector<int> boys(m);
        for(int i=0; i<m; i++)
        {
            cin>>boys[i];
        }
        int n;
        cin>>n;
        vector<int> girls(n);
        for(int i=0; i<n; i++)
        {
            cin>>girls[i];
        }
        sort(boys.begin(), boys.end());
        sort(girls.begin(), girls.end());
        int i=0, j=0;
        int count=0;
        while(i<m && j<n)
        {
            if(abs(boys[i]-girls[j])<=1)
            {
                count++;
                i++;
                j++;
                continue;
            }
            else if(boys[i]>girls[j])
            {
                j++;
            }
            else
            {
                i++;
            }

            
        }
        cout<<count<<endl;
        
    }
    return 0;
}