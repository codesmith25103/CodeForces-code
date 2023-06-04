#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    vector<int> vec={4,7,47,74,444,447,474,744,747,774,777};
    while (t--)
    {
        int num;
        cin>>num;
        for(int i=0; i<vec.size(); i++)
        {
            if(num%vec[i]==0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        cout<<"NO"<<endl;
        return 0;
    }
    return 0;
}