class Solution {
private:
    bool check(vector<int> nums) {
        bool odd = true;
        bool even = true;

        for (int x : nums) {
            if (x % 2 == 0) {
                odd = false;
            } else {
                even = false;
            }
        }
        return odd || even;
    }
    bool solve(vector<int> nums1, vector<int> nums2, int index) {
        if (index == nums1.size()) {
            return check(nums2);
        }
        int n = nums1.size();

        nums2.push_back(nums1[index]);
        if (solve(nums1, nums2, index + 1))
            return true;
        nums2.pop_back();
        for (int j = 0; j < n; j++) {
            if (j == index) {
                continue;
            }
            nums2.push_back(nums1[index] - nums1[j]);
            if (solve(nums1, nums2, index + 1))
                return true;
            nums2.pop_back();
        }
        return false;
    }

public:
    bool uniformArray(vector<int>& nums1) {
        // vector<int> nums2;

        // return solve(nums1,nums2,0);
         return true;
    }
};