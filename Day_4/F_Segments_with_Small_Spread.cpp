#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    multiset<long long> s;
    long long l = 0, r = 0, total = 0;
    while (r < n) {
        s.insert(v[r]);
        long long mn = *s.begin(), mx = *s.rbegin();
        if (mx - mn <= m) {
            total += (r - l + 1);
        } else {
            while (l < r  ) {
                mn = *s.begin(), mx = *s.rbegin();
                 if (mx - mn <= m)
                 {
                    break;
                 }
                s.erase(s.find(v[l]));
                l++;
               
            }
             mn = *s.begin();
                mx = *s.rbegin();
            if (mx - mn <= m) {
                total += (r - l + 1);
            }
        }
        r++;
    }

    cout << total << endl;

    return 0;
}
