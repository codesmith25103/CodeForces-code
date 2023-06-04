// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int sqBs(ll n)
// {
//     ll res=n/2;
//     ll low=1; 
//     ll high=n/2;
//     while(low<=high)
//     {
//         ll mid=(high-low)/2+low;
//         ll check=mid*mid;
//         if(check==n)
//         {
//             return mid;
//         }
//         else if(check>n)
//         {
//             high=mid-1;
//         }
//         else
//         {
//             low=mid+1;
//         }
//     }
//     return -1;

// }
// int main()
// {
//     cin.tie(0);cin.sync_with_stdio(0);
//     cout.tie(0);cout.sync_with_stdio(0);
//     ll t = 1;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin>>n;
//         int a=1;
//         for(ll i=2; n>=i*i; i++)
//         {
//             if(n%i==0)
//             {
//                 a=i;
//                 break;
//             }
//         }
//         cout<<a<<" "<<n-a<<endl;
    
//     }
    
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a = 1;
    for (int g = 2; g * g <= n; ++g) {
      if (n % g == 0) {
        a = n / g;
        break;
      }
    }
    cout << a << ' ' << n - a << '\n';
  }
}
 