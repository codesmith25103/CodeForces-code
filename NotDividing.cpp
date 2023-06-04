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
        if(vec[0]==1)
        {
            vec[0]++;
        }
        for(int i=1; i<size; i++)
        {
            if(vec[i]==1)
            {
                vec[i]++;
            }
            if(vec[i]%vec[i-1]==0)
            {
                vec[i]++;
            }
        }
        for(int i=0; i<size; i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}