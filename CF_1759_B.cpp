#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
      int size, sum;
        int s=0;
        cin>>size>>sum;
        set<int> s1;
        int m=0;
        for(int i=0; i<size; i++)
        {
            int element;
            cin>>element;
            m=max(m, element);
            s1.insert(element);
        }
        for(int i=1; i<=m; i++)
        {
            if(s1.find(i)==s1.end())
            {
                s+=i;
            }
        }
        if(s==sum)
        {
            cout<<"YES"<<endl;
            return;
        }
        else
        {
            int i=m+1;
            while(true)
            {
                s+=i;
                if(s==sum)
                {
                    cout<<"YES"<<endl;
                    return;
                }
                if(s>sum)
                {
                    cout<<"NO"<<endl;
                    return;
                }
                i++;
            }
        }
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