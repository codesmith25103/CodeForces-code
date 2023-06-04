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
        long long int size;
        cin>>size;
        vector<long long int> vec;
        for(int i=0; i<size; i++)
        {
            long long int element;
            cin>>element;
            vec.push_back(element);
        }
        sort(vec.begin(), vec.end());
        long long int count=vec[0]-1;
        vec[0]=1;
        for(long long int i=1; i<size; i++)
        {
            if(vec[i]==vec[i-1])
            {
                continue;
            }
            else
            {
                count+=vec[i]-vec[i-1]-1;
                vec[i]=vec[i-1]+1;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}