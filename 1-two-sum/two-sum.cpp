class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ans;

        for (int i = 0; i < nums.size(); i++) {

            int sum = target - nums[i];
            if (ans.contains(sum)) {
                return {i, ans[sum]};
            }
            ans.insert({nums[i], i});
        }
        return {-1, -1};
    }
};