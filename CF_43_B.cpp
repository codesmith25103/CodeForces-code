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
        int size, k;
        cin>>size>>k;
        vector<int> vec(size);
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        sort(vec.begin(), vec.end());
        int sum=0;
        for(int i=0; i<k; i++)
        {
            if(vec[i]<0)
            {
                sum+=vec[i];
            }
            else 
            {
                break;
            }
        }
        cout<<abs(sum)<<endl;
    }
    return 0;
}