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
        int page;
        cin>>page;
        vector<int> vec;
        vec.push_back(0);
        for(int i=1; i<=7; i++)
        {
            int element; 
            cin>>element;
            vec.push_back(element);
        }
        for(int i=1; i<=7; )
        {
            page-=vec[i];
            if(page<=0)
            {
                cout<<i<<endl;
                break;
            }
            ++i;
            if(i==8)
            {
                i=1;
            }
        }
    }
    return 0;
}