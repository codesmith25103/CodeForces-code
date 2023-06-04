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
        vector<int> vec1(size);
        vector<int> vec2(size);
        for(int i=0; i<size; i++)
        {
            cin>>vec1[i];
        }
        for(int i=0; i<size; i++)
        {
            cin>>vec2[i];
        }
        vector<int> t1=vec1;
        vector<int> t2=vec2;
        sort(t1.begin(), t1.end());
        sort(t2.begin(), t2.end());
        if(vec1[size-1]==t1[size-1] && vec2[size-1]==t2[size-1])
        {
            cout<<"YES"<<endl;
        }
        else if((vec1[size-1]==t1[size-1] && vec2[size-1]!=t2[size-1])

        
    }
    return 0;
}