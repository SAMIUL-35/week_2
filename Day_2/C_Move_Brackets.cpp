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
stack<char> t;
   for (int i = 0; i < n; i++)
   {
    if(s[i]=='(')
    {
        t.push(s[i]);
    }
    else 
    {
        if(!t.empty())
        {
            t.pop();
        }
    }

   }
   cout<<t.size()<<endl;
   
  }
  


    return 0;
}