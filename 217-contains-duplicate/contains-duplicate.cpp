class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // int n = nums.size();

        // for (int i = 0; i < n - 1; i++)
        //     for (int j = i + 1; j < n; j++)
        //         if (nums[i] == nums[j])
        //             return true;

        // return false;

        unordered_set<int> st;

        for (int num : nums) {
            if (st.count(num)) {
                return true;
            }
            st.insert(num);
        }
        return false;
    }
};