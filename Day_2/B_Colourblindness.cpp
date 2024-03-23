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
   vector<string> a;
   for (int i = 0; i < 2; i++)
   {
    string s;
    cin>>s;
    a.push_back(s);
   }
   bool ok=true;
   for (int i = 0; i < n; i++)
   {
   if(a[0][i]!=a[1][i])
   {
    if( a[0][i]=='G'&& a[1][i]=='B' || a[0][i]=='B'&& a[1][i]=='G') 
   {continue;
   }
   else 
   {
    ok=false;
    break;
   }
 
   }
  
   }
   if(ok) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
   
  }
  


    return 0;
}