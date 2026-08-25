class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> ans;

        for (int n : nums) {
            ans.insert(n);
        }
        int i = k;
        for (int i = k;; i += k) {
            if (i % k == 0) {
                if (!ans.contains(i)) {
                    return i;
                }
            }
        }
    }
};