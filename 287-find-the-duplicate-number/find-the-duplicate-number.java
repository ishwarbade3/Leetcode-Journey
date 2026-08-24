class Solution {
    public int findDuplicate(int[] nums) {

        Set<Integer> ans = new HashSet<Integer>();

        for (int n : nums) {

            if (!ans.add(n))
                return n;
        }
        return -1;

    }
}