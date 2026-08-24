class Solution {
    public int[] twoSum(int[] nums, int target) {

        Map<Integer, Integer> ans = new HashMap<Integer, Integer>();

        for (int i = 0; i < nums.length; i++) {
            int sum = target - nums[i];

            if (ans.containsKey(sum)) {
                return new int[] { i, ans.get(sum) };
            }
            ans.put(nums[i], i);
        }
        return new int[] { -1, -1 };
    }
}