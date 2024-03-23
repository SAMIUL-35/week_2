#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    vector<int> v(n);
   map<int,int> f;
     int m=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        f[v[i]]++;
        if(f[v[i]]>m) m=f[v[i]];
    }

 int ans = 0;
        while (m < n) {
            int d = min(n - m, m);
            ans += 1 + d;
            m += d;
        }
        cout << ans << '\n';
  }
  


    return 0;
}