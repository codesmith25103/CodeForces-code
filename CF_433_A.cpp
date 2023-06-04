#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    while (t--)
    {      
        int size;
        cin>>size;
        int c1=0, c2=0;
        int sum=0;
        vector<int> vec(size, 0);
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
            sum+=vec[i];
            if(vec[i]==100)
            {
                c1++;
            }
            else 
            {
                c2++;
            }
        }
        int res=sum/2;
        if(res%100!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            sort(vec.begin(), vec.end());
            int temp=0;
            while(res>0)
        }

    }
    return 0;
}