class Solution {
    public int missingMultiple(int[] nums, int k) {

        Set<Integer> ans = new HashSet<Integer>();

        for (int n : nums)
            ans.add(n);

        for (int i = k;; i += k) {
            if (i % k == 0) {
                if (!ans.contains(i)) {
                    return i;
                }
            }
        }
    }
}