#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr);
    cin.sync_with_stdio(false);
    cout.tie(nullptr);
    cout.sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        set<int> s1;
        for (int i = 0; i < size; i++)
        {
            int el;
            cin >> el;
            s1.insert(el);
        }
        for (auto it1 = s1.begin(); it1 != s1.end(); ++it1)
        {
            for (auto it2 = next(it1); it2 != s1.end(); ++it2)
            {
                s1.insert(-1 * ((*it1) - (*it2)));
                // cout<<-1 * ((*it1) - (*it2))<<endl;
            }
        }

        cout << s1.size() << endl;
    }

    return 0;
}
