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
        vector<int> vec;
        for(int i=0; i<size; i++)
        {
            int element;
            cin>>element;
            vec.push_back(element);
        }
        int flag=0;
        for(int i=0; i<size ;i++)
        {
            if(vec[i]<=i+1)
            {
                flag=1;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}