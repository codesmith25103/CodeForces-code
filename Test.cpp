#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<int> v;
    v.push_back(t);
    cout<<"Here"<<endl;
    while (t >= 1)
    {
        int r = t / 2;    
            if(r==0)
            {
                break;
            }
        if (t % r == 0)
            v.push_back(r);
        t = t / 2;
    }

    for (int i = 0; i < v.size(); i++)     // 30   30 15 5 1
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << 77777 << endl;
    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     vector<int> v;
//     v.push_back(t);
//     cout << "Here" << endl;
//     while (t >= 1)
//     {
//         int r = t / 2;
//         if (r == 0)
//             break;
//         v.push_back(r);
//         t = r;
//     }

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
//     cout << 77777 << endl;
//     return 0;
// }
