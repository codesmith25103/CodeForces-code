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
        int m1=INT_MIN;
        int m2=INT_MAX;
        vector<int> vec(size);
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
            m1=max(m1, vec[i]);
            m2=min(m2, vec[i]);            
        }
        int count=0;
        for(int i=0; i<size; i++)
        {
            if(vec[i]!=m1 && vec[i]!=m2)
            {
                count++;
            }
        }
        cout<<count<<endl;
        

    }
    return 0;
}