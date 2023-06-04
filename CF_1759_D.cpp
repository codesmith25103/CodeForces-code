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
        long long int num1, num2;
        cin>>num1>>num2;
        long long int ans=0;
        int count=0;
        for(int i=num2; i>=1; i--)
        {
            long long int ans1=num1*i;
            int count1=0;
            int rem=0;
            while(rem==0 && ans1!=0)
            {
                rem=ans1%10;
                if(rem==0)
                {
                    count1++;
                }
                ans1=ans1/10;
            }
            if(count1>count)
            {
                count=count1;
                ans=i;
                continue;
            }
            else if(count1==count)
            {
                if(ans<i)
                {
                    ans=i;
                }
            }
            
        }
        if(ans==0)
        {
            cout<<num1*num2<<endl;
        }
        else
        {
            cout<<num1*ans<<endl;
        }
    }
    return 0;
}