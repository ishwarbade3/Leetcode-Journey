class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        // unordered_set<int> ans;

        // for (int n : nums)
        //     ans.insert(n);

        // for (int i = k;; i += k) {
        //     if (i % k == 0) {
        //         if (!ans.contains(i)) {
        //             return i;
        //         }
        //     }
        // }
        unordered_set<int> ans(nums.begin(), nums.end());

        for (int i = k;; i += k) {
            if (!ans.contains(i)) {
                return i;
            }
        }
    }
};