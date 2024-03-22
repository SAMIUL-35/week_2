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
    string s;
    cin>>s;
    string k="Timur";
    sort (s.begin(),s.end());
    sort(k.begin(),k.end());
    if(s==k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

  }

    return 0;
}