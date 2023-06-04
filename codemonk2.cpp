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
        int count=0;
        vector<vector<int>> vec(size , vector<int> (size, 0));
        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size; j++)
            {
                cin>>vec[i][j];
            }
        }
        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size; j++)
            {
                for(int x=i; x<size; x++)
                {
                    for(int y=j; y<size; y++)
                    {
                        if(vec[i][j]>vec[x][y])
                        {
                            count++;
                        }
                    }
                }
            }
        }
        cout<<count<<endl;
        // for(int i=0; i<size; i++)
        // {
        //     for(int j=0; j<size; j++)
        //     {
        //         cout<<vec[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
    }
    return 0;
}