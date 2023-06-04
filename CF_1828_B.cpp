#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int gcd(int a, int b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}
int findGCD(vector<int> arr, int n)
{
  int result = arr[0];
  for (int i = 1; i < n; i++)
  {
    result = gcd(arr[i], result);
 
    if(result == 1)
    {
    return 1;
    }
  }
  return result;
}
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
        vector<int> vec(size+1, 0);
        vector<int> ans;
        for(int i=1; i<=size; i++)
        {
            cin>>vec[i];
        }
        for(int i=1; i<=size; i++)
        {
            if(vec[i]!=i)
            {
                int res=abs(vec[i]-i);
                ans.push_back(res);
            }
        }
        int m=findGCD(ans, ans.size());

        cout<<m<<endl;

    }
    return 0;
}