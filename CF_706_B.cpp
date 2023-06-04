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
        sort(vec.begin(), vec.end());
        
        int m;
        cin>>m;
        for(int i=0; i<m; i++)
        {
            int count=0;
            int price;
            cin>>price;
            for(int i=0; i<size; i++)
            {
                if(price>=vec[i])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            cout<<count<<endl;
            
        }
    }
    return 0;
}