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
        vector<int> vec(size);
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        int i=0, j=size-1;
        int res1=1;
        int res2=size;
        int m1=0, m2=0;
        while(i<j)
        {
            if(vec[i]==res1)
            {
                res1++;
                i++;
                continue;
            }
            if(vec[i]==res2)
            {
                res2--;
                i++;
                continue;
            }
            if(vec[j]==res1)
            {
                res1++;
                j--;
                continue;
            }
            if(vec[j]==res2)
            {
                res2--;
                j--;
                continue;
            }
            m1=i+1;
            m2=j+1;
            break;
        }
        // cout<<m1<<" "<<m2<<endl;
        if(m1>=m2)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<m1<<" "<<m2<<endl;
        }
    }
    return 0;
}