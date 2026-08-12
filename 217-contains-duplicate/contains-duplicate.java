class Solution {
    public boolean containsDuplicate(int[] nums) {

        HashSet<Integer> ans = new HashSet<Integer>();

        for (int n : nums) {
            if (ans.contains(n)){
                return true;
            }
            ans.add(n);
        }
        return false;
    }
}