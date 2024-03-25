#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    long long m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    long long l = 0, r = 0, sum = 0, ans = 0;

    while (r < n) {
        sum += v[r];
        if (sum <= m) {
            ans += r - l + 1;
        } else {
            while (sum > m && l <= r) { 
                
                   sum -= v[l];
                l++;
            }
            if (sum <= m) {
                ans += r - l + 1;
            }
        }
        r++;
    }
    cout << ans << endl;

    return 0;
}
