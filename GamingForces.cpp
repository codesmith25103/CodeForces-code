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
        int count1=0, count=0;
        int size;
        cin>>size;
        vector<int> vec;
        for(int i=0; i<size; i++)
        {
            int element;
            cin>>element;
            vec.push_back(element);
        }
        for(int i=0; i<size; i++)
        {
            if(vec[i]==1)
            {
                count1++;
            }
            else
            {
                count++;
            }
        }
        int sum=count1/2+count1%2+count;
        cout<<sum<<endl;
    }
    return 0;
}