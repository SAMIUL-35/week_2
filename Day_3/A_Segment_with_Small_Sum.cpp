#include <bits/stdc++.h>

using namespace std;

int main ()

{
  long long n,k;
  cin>>n>>k;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin>>v[i];
  }
  int l=0,r=0;
  long long sum=0;
  int ans=0;
  while (r<n)
  {
    sum+=v[r];
    if(sum>k)
    {
        
sum-=v[l];
l++;
    }
    ans=max(ans,r-l+1);
    r++;
  }
  
cout<<ans<<endl;

    return 0;
}