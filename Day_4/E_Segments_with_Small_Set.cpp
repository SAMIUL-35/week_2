#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    unordered_map<int, int> map;

    int l = 0, r = 0;
    long long total = 0;
    while (r < n) {
        map[v[r]]++;
        while (map.size() > m) {
            map[v[l]]--;
            if (map[v[l]] == 0) { 
                map.erase(v[l]);
            }
            l++;
        }

        total += r - l + 1;
        r++;
    }

    cout << total << endl;

    return 0;
}
