#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool dfs(vector<string> vec, int i, int j, char res, int count)
{
    if(count==3)
    {
        return true;
    }
    if(i<0 || j<0 || i>2 || j>2 || vec[i][j]!=res)
    {
        return false;
    }
    vec[i][j]='1';
    bool t1=dfs(vec, i+1, j, res, count+1);
    bool t2=dfs(vec, i-1, j, res, count+1);
    bool t3=dfs(vec, i, j+1, res, count+1);
    bool t4=dfs(vec, i, j-1, res, count+1);
    bool t5=dfs(vec, i+1, j+1, res, count+1);
    bool t6=dfs(vec, i-1, j-1, res, count+1);
    bool t7=dfs(vec, i-1, j+1, res, count+1);
    bool t8=dfs(vec, i+1, j-1, res, count+1);
    if(t1||t2||t3||t4||t5||t6||t7||t8)
    {
        return true;
    }
    return false;

}
void solve()
{
    vector<string> vec;
        for(int i=0; i<3; i++)
        {
            string e1;
            cin>>e1;
            vec.push_back(e1);
        }
        for(int i=0; i<3; i++)
        {
            for(int  j=0; j<3; j++)
            {
                if(vec[i][j]!='.')
                {
                    char res=vec[i][j];
                    if(dfs(vec, i, j, res, 0))
                    {
                        cout<<res<<endl;
                        return;
                    }
                }
            }
        }
        cout<<"DRAW"<<endl;
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