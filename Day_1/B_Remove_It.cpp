#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int n,m;
  cin>>n>>m;
  vector<int> v(n);
  vector<int> f;
  for (int i = 0; i < n; i++)
  {
    cin>>v[i];
    
  }
  
  for (int i = 0; i < n; i++)
  {
    if(v[i]!=m)f.push_back(v[i]);
  }
  for (int i = 0; i < f.size(); i++)
  {
    cout<<f[i]<<" ";
  }
  


    return 0;
}