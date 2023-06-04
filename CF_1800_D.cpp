#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        string str;
        cin >> str;

        // Check if str has at least 2 characters
        if (str.length() < 2)
        {
            cout << "Invalid input\n";
            continue;
        }

        set<string> vec;
        for (int i = 0; i < size - 1; i++)
        {
            string ans = str.substr(i, 2);
            str.erase(i, 2);
            vec.insert(str);
            str.insert(i, ans);
        }
        cout << vec.size() << endl;
    }

    return 0;
}
