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
        int m=0;
        for(int i=0; i<size; i++)
        {
            int count=1;
            int res1=vec[i];
            int res2=vec[i];
            for(int j=i-1; j>=0; j--)
            {
                if(vec[j]<=res1)
                {
                    count++;
                    res1=vec[j];
                }
                else 
                {
                    break;
                }
            }
             for(int j=i+1; j<size; j++)
            {
                if(vec[j]<=res2)
                {
                    count++;
                    res2=vec[j];
                }
                else 
                {
                    break;
                }
            }
            m=max(m, count);
        }
        cout<<m<<endl;
    }
    return 0;
}