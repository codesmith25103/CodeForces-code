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
        vector<int> vec;
        int neg=0;
        int pos=0;
        for(int i=0; i<size; i++)
        {
            int element;
            cin>>element;
            vec.push_back(element);
            if(element>0)
            {
                pos++;
            }
            else
            {
                neg++;
            }
        }
        int sum=0;
        if(pos==size)
        {
            vec[0]=-1;
            vec[1]=-1;
            for(int i=0; i<size; i++)
            {
                sum+=vec[i];
            }
            cout<<sum<<endl;
        }
        else if(neg==size)
        {
            vec[0]=1;
            vec[1]=1;
            for(int i=0; i<size; i++)
            {
                sum+=vec[i];
            }
            cout<<sum<<endl;
        }
        else
        {
            int flag=0;
            int z=0, y=0;
            for(int i=0; i<size-1; i++)
            {
                if(vec[i]==-1 && vec[i+1]==-1)
                {
                    vec[i]=1;
                    vec[i+1]=1;
                    flag=3;
                    break;
                }
                else if(vec[i]==1 && vec[i+1]==-1)
                {
                    z=i;
                    y=i+1;
                    flag=max(flag,2);
                }
                else if(vec[i]==-1 && vec[i+1]==1)
                {
                    z=i;
                    y=i+1;
                    flag=max(flag,2);
                }
            }
            if(flag==3)
            {
                for(int i=0; i<size; i++)
                {
                    sum+=vec[i];
                }
                cout<<sum<<endl;
            }
            else
            {
                vec[z]=-1*vec[z];
                vec[y]=-1*vec[y];
                for(int i=0; i<size; i++)
                {
                    sum+=vec[i];
                }
                cout<<sum<<endl;
            }
        }

    }
    return 0;
}