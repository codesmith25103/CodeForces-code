#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool sort1(int x, int y)
{
    return x%2<y%2;
}
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
        int count=0;
        sort(vec.begin(), vec.end(), sort1);
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
            {
                int res=2*vec[j];
                int rem=__gcd(vec[i], res);
                if(rem>1)
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}