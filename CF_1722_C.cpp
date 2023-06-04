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
        int m, n;
        cin>>m>>n;
        int res=1;
        vector<int> vec;
        int res1=1;
        while(n-m>res)
        {
            vec.push_back(res1);
            res1+=res;
            res++;
        }
    }
    return 0;
}