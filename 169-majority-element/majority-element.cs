public class Solution {
    public int MajorityElement(int[] nums) {
      int flag = 0;
        int count = 0;
        for (int i = 0; i < nums.Length; i++) {
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