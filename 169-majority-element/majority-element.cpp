class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int flag;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (count == 0) {
                flag = nums[i];
            }
            if (nums[i] == flag) {
                count++;
            } else {
                count--;
            }
        }
        return flag;
    }
};