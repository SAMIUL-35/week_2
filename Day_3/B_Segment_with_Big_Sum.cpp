#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int n;
  cin>>n;
  long long k;
  cin>>k;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin>>v[i];
  }
  int l=0,r=0;
  int ans=n+1;
  long long sum=0;
  while (r<n)
  {sum+=v[r];
    while(sum>=k)
    {ans=min(ans,r-l+1);
        sum-=v[l];
    l++;
    
    }
     r++;
  }
  if(ans==n+1) cout<<-1<<endl;
 else cout<<ans<<endl;


    return 0;
}