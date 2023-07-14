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
        string str;
        cin>>str;
        int num;
        cin>>num;
        priority_queue<pair<char, int>> p1;
        int sum=0;
        for(int i=0; i<str.size(); i++)
        {
            char res=str[i];
            sum=sum+res-'a'+1;
            // cout<<sum<<endl;
            pair<char, int> p={res, i};
            p1.push(p);
        }
        while(!p1.empty() && num<sum)
        {
            int res=p1.top().first-'a'+1;
            sum-=res;
            p1.pop();
        }
        vector<pair<int, char>> vec;
        while(!p1.empty())
        {
            pair<int, char> p={p1.top().second, p1.top().first};
            vec.push_back(p);
            p1.pop();
        }
        sort(vec.begin(), vec.end());
        for(int i=0; i<vec.size(); i++)
        {
            cout<<vec[i].second;
        }
        cout<<endl;
    }
    return 0;
}