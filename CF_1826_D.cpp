#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll size;
        cin >> size;
        vector<ll> vec(size);
        for(int i=0; i<size; i++)
        {
            cin >> vec[i];
        }
        ll m1 = 0, m2 = 0, m3 = 0;
        ll ans = 0;
        for(int i = 0; i < 3; i++)
        {
            ll res = vec[i];
            if(res >= m1)
            {
                m3 = m2;
                m2 = m1;
                m1 = res;
            }
            else if(res >= m2)
            {
                m3 = m2;
                m2 = res;
            }
            else if(res > m3)
            {
                m3 = res;
            }
            ans = max(m1 + m2 + m3-2, ans);
        }
        for(int i = 3; i < size; i++)
        {
            ll res = vec[i];
            if(res >= m1)
            {
                m3 = m2;
                m2 = m1;
                m1 = res;
            }
            else if(res >= m2)
            {
                m3 = m2;
                m2 = res;
            }
            else if(res >= m3)
            {
                m3 = res;
            }
            ans = max(m1 + m2 + m3 - i, ans);   
        }
        cout << ans << endl;
    }
    return 0;
}
