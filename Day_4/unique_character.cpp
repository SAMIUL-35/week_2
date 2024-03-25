class Solution {
public:
    int longestKSubstr(string s, int k) {
        int n = s.length();
        unordered_map<char, int> freq;
        int maxLength = -1;

        int l = 0;
        for (int r = 0; r < n; ++r) {
            freq[s[r]]++;

            while (freq.size() > k) {
                freq[s[l]]--;
                if (freq[s[l]] == 0) {
                    freq.erase(s[l]);
                }
                l++;
            }

            if (freq.size() == k) {
                maxLength = max(maxLength, r - l + 1);
            }
        }

        return maxLength;
    }
};