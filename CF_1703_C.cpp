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
        vector<int> vec(size);
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        for(int i=0; i<size; i++)
        {
            int s1;
            cin>>s1;
            string str1;
            cin>>str1;
            int c1=0;
            for(int j=0; j<s1; j++)
            {
                if(str1[j]=='D')
                {
                    vec[i]++;
                    if(vec[i]==10)
                    {
                        vec[i]=0;
                    }
                }
                else
                {
                    vec[i]--;
                    if(vec[i]==-1)
                    {
                        vec[i]=9;
                    }
                }
            }
            cout<<vec[i]<<" ";

        }
        cout<<endl;
    }
    return 0;
}