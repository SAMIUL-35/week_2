#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
           cin>>v[i];
        }
        for (int i = 0; i < n; i++)
        {
            int k=v[i];
            
            int l;
        string s;
        cin >> l >> s;
        for (int j = 0; j< l; j++) {
            
            if (s[j] == 'U') {
                if (k != 0) k--;
                else k = 9;
            } else {
                if (k != 9) k++;
                else k = 0;
            }
        
        
        }
        v[i]=k;
       
            
        }
       
       for (int i = 0; i < n; i++)
       {
        cout<<v[i]<<" ";
       }
       cout<<endl;
       
    }
    return 0;
}
