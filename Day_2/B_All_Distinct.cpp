// #include <bits/stdc++.h>

// using namespace std;

// int main ()

// {
//   int t;
//   cin>>t;
//   while (t--)
//   {
// 	int n;
// 	cin>>n;
// 	set <int> a;
// 	for (int i = 0; i < n; i++)
// 	{
// 		int x;
// 		cin>>x;
// 		a.insert(x);
// 	}
	
// if((n-a.size())%2==0) cout<<a.size()<<endl;
// else cout<<a.size()-1<<endl;
//   }
  


// 	return 0;
// }

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
	vector <int> a;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin>>x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());
	 a.erase(unique(a.begin(), a.end()), a.end());
	

if((n-a.size())%2==0) cout<<a.size()<<endl;
else cout<<a.size()-1<<endl;
  }
  


	return 0;
}