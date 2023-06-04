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
        long long int size, p;
        cin>>size>>p;
        long long int p1=p, p2=p, p3=p;
        vector<long long int> vec(size);
        for(long long int i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        sort(vec.begin(), vec.end());
        long long int count1=0, count2=0, count3=0;
        long long int count=0;
        long long int green1=1, blue1=1, red1=1;
         long long int green2=1, blue2=1, red2=1;
         long long int green3=1, blue3=1, red3=1;
        for(long long int i=0; i<size;)
        {
            if(p1>vec[i])
            {
                p1+=vec[i]/2;
                count1++;
                i++;
            }
            else 
            {
                if(green1!=0)
                {
                    p1=p1*2;
                    green1--;
                    continue;
                }
                if(blue1!=0)
                {
                    p1=p1*3;
                    blue1--;
                    continue;
                }
                if(red1!=0)
                {
                    p1=p1*2;
                    red1--;
                    continue;
                }
                if(green1==0 && blue1==0 && red1==0)
                {
                    break;
                }

            }
        }
        for(long long int i=0; i<size;)
        {
            if(p2>vec[i])
            {
                p2+=vec[i]/2;
                count2++;
                i++;
            }
            else 
            {
                if(blue2!=0)
                {
                    p2=p2*3;
                    blue2--;
                    continue;
                }
                if(green2!=0)
                {
                    p2=p2*2;
                    green2--;
                    continue;
                }
                if(red2!=0)
                {
                    p2=p2*2;
                    red2--;
                    continue;
                }
                if(green2==0 && blue2==0 && red2==0)
                {
                    break;
                }

            }
        }
        for(long long int i=0; i<size;)
        {
            if(p3>vec[i])
            {
                p3+=vec[i]/2;
                count3++;
                i++;
            }
            else 
            {
                if(green3!=0)
                {
                    p3=p3*2;
                    green3--;
                    continue;
                }
                if(red3!=0)
                {
                    p3=p3*2;
                    red3--;
                    continue;
                }
                if(blue3!=0)
                {
                    p3=p3*3;
                    blue3--;
                    continue;
                }
                
                if(green3==0 && blue3==0 && red3==0)
                {
                    break;
                }

            }
        }
        count=max(count1, max(count2, count3));
        cout<<count<<endl;
    }
    return 0;
}