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
        unordered_set<int> s1;
        vector<int> vec;
        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size-1; j++)
            {
            
                int element;
                cin>>element;
                if(s1.find(element)==s1.end())
                {
                    s1.insert(element);
                    vec.push_back(element);
                }
            }
        }
        for(auto &x:vec)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}