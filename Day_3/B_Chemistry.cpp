#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int t;
  cin>>t;
  while (t--)
  {
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    map<char,int> ma;
    for (int i = 0; i < n; i++)
    {
        ma[s[i]]++;
    }
   int cnt=0;
    for(auto k:ma)
{
if(k.second%2==1)
{
cnt++;
}


}
if(cnt>m+1)cout<<"NO"<<endl;
else cout<<"YES"<<endl;
  }



    return 0;
}