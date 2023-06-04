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
        vector<double> vec;
        for(int i=0; i<size; i++)
        {
            double element;
            cin>>element;
            vec.push_back(element);
        }
        int height=vec[0];
        sort(vec.begin()+1, vec.end());
        for(int i=1; i<size; i++)
        {
            if(vec[i]>height)
            {
                double res=vec[i]-height;
                height+=ceil(res/2);
            }
        }
        cout<<height<<endl;
    }
    return 0;
}