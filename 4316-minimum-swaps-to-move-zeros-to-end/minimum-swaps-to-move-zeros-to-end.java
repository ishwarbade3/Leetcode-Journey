class Solution {
    public int minimumSwaps(int[] nums) {
        int left = 0;
        int right = nums.length - 1;

        int count = 0;

        while (left < right) {
            if (nums[right] == 0) {
                right--;
            } else if (nums[left] != 0) {
                left++;
            } else {
                int temp = nums[left];
                nums[left] = nums[right];
                nums[right] = temp;
                count++;
                left++;
                right--;
            }
        }
        return count;
    }
}