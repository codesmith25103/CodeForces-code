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
        long long int size;
        cin>>size;
        vector<long long int> vec;
        for(int i=0; i<size; i++)
        {
            long long int element;
            cin>>element;
            vec.push_back(element);
        }
        sort(vec.begin(), vec.end());
        long long int c1=0, c2=0;
        for(long long int i=0; i<size; i++)
        {
            if(vec[0]==vec[i])
            {
                c1++;
            }
            if(vec[size-1]==vec[i])
            {
                c2++;
            }
        }
        if(vec[0]==vec[size-1])
        {
            long long int answer=c1*(c1-1);
            cout<<answer<<endl;
        }
        else
        {        long long int answer=c1*c2*2;
            cout<<answer<<endl;
        }
    }
    return 0;
}