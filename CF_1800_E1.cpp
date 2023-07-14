#include <iostream>
#include <string>
using namespace std;

bool solve(string &str1, string &str2, int size, int k, int j, int i)
{
    if (str1[j] == str2[i])
    {
        str1[i] = '1';
        return true;
    }
    if (i >= size || i < 0)
    {
        return false;
    }
    return solve(str1, str2, size, k, j, i + k) || solve(str1, str2, size, k, j, i + k + 1) || solve(str1, str2, size, k, j, i - k - 1);
}

void dfs()
{
    int size, k;
    cin >> size >> k;
    string str1, str2;
    cin >> str1 >> str2;
    for (int i = 0; i < size; i++)
    {
        if (!solve(str1, str2, size, k, i, i))
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        dfs();
    }
    return 0;
}
