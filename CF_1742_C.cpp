#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
        vector<vector<char>> vec(8, vector<char>(8));
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                cin>>vec[i][j];
            }
        }
        for(int i=0; i<8; i++)
        {
            int r=0;
            for(int j=0; j<8; j++)
            {
                if(vec[i][j]=='R')
                {
                    r++;
                }
            }
            if(r==8)
            {
                cout<<"R"<<endl;
                return;
            }
        }
        cout<<"B"<<endl;
        return;


}
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}