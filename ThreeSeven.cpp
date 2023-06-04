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
        vector<vector<int>> vec;
        for(int i=0; i<size; i++)
        {
            int sizeTemp;
            cin>>sizeTemp;
            vector<int> v1;
            for(int j=0; j<sizeTemp; j++)
            {
                int element;
                cin>>element;
                v1.push_back(element);
            }
            vec.push_back(v1);
        }
        vector<vector<int>> answer;
        for(int i=0; i<size-1; i++)
        {
            vector<int> v2;
            for(int j=0; j<vec[i+1].size(); j++)
            {
                v2.push_back(vec[i][j]);
            }
            answer.push_back(v2);
        }
        for(int i=0; i<size-1; i++)
        {
            for(int j=0; j<vec[i]; j++)
            {
                cout<<answer[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}