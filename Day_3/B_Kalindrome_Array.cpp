#include <bits/stdc++.h>

using namespace std;

bool check(vector<int>& v, int x) {
    int n = v.size();
    int l = 0, r = n - 1;
    while (l < r) {
        if (v[l] == x) {
            l++;
        } else if (v[r] == x) {
            r--;
        } else if (v[l] != v[r]) {
            return false;
        } else {
            l++;
            r--;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        bool ans = true;
        for (int i = 0; i < n / 2; i++) {
            if (v[i] != v[n - 1 - i]) {
                ans = check(v, v[i]) || check(v, v[n - 1 - i]);
                break;
            }
        }
        if (ans) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
