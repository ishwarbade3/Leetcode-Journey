class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int ans = 0;
        int sum = n*(n + 1) / 2;
        for (int num : nums)
            ans += num;

        return sum - ans;
    }
}