#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    cout.sync_with_stdio(0);

    int n;
    cin >> n;
    int vec[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> vec[i][j];
        }
    }

    set<int> s1;
    for (int i = 0; i < n; i++)
    {
        int flag = 1;
        for (int j = 0; j < n; j++)
        {
            if (vec[i][j] != 0 && vec[i][j] != 2 && vec[i][j]!=-1)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            s1.insert(i + 1);
        }
    }

    cout << s1.size() << endl;
    for (auto &x : s1)
    {
        cout << x << " ";
    }
    cout<<endl;

    return 0;
}
