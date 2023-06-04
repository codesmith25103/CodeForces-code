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
        int size, coin;
        cin>>size>>coin;
        vector<int> vec(size);
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        for(int i=0; i<size; i++)
        {
            vec[i]=vec[i]+1+i;
        }
        sort(vec.begin(), vec.end());
        int count=0;
        for(int i=0; i<size; i++)
        {
            if(vec[i]<=coin)
            {
                count++;
                coin=coin-vec[i];
            }
            else 
            {
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}