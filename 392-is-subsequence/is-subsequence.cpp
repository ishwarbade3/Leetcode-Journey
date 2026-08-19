class Solution {
public:
    bool isSubsequence(string s, string t) {

        int start0 = 0;
        int start1 = 0;

        while (start0 < s.size() && start1 < t.size()) {

            if (s[start0] == t[start1]) {
                start0++;
                start1++;
            } else {
                start1++;
            }
        }
        return start0 == s.size();
    }
};