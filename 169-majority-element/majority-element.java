class Solution {
    public int majorityElement(int[] nums) {
        int flag=0;
        int count = 0;

        for (int i = 0; i < nums.length; i++) {

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
}