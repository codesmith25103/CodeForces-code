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
        int alarm, sh, sm;
        cin>>alarm>>sh>>sm;
        sm=-1*sm;
        vector<vector<int>> vec;
        for(int i=0; i<alarm; i++)
        {
            vector<int> res;
            int h, m;
            cin>>h>>m;
            if(h>=24)
            {
                h=0;
            }
            res.push_back(h);
            res.push_back(m);
            vec.push_back(res);
        }
        int min1=INT_MAX;
        for(int i=0; i<alarm; i++)
        {
            if(sh>vec[i][0])
            {
                int res=(vec[i][0]+(24-sh))*60;
                int minute=sm+vec[i][1];
                int ans=res+minute;
                min1=min(ans, min1);
            }
            else if(sh==vec[i][0])
            {
                if(-sm>vec[i][1])
                {
                 int minute=sm+vec[i][1];
                 int ans=minute+(24*60);
                 min1=min(ans, min1);
                }
                else
                {
                    int minute=sm+vec[i][1];
                 int ans=minute;
                 min1=min(ans, min1);
                }
            }
            else
            {
                int res=(vec[i][0]-sh)*60;
                int minute=sm+vec[i][1];
                int ans=res+minute;
                min1=min(ans, min1);
            }
        }
        cout<<min1/60<<" "<<min1%60<<endl;
    }
    return 0;
}