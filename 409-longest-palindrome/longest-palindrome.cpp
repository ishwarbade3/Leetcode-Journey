class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> freq(128, 0);

        for (char ch : s) {
            freq[ch]++;
        }

        int ans = 0;
        bool odd = false;

        for (int x : freq) {
            if (x % 2 == 0) {
                ans += x;
            } else {
                ans += x - 1;
                odd = true;
            }
        }

        if (odd) ans++;

        return ans;
    }
};