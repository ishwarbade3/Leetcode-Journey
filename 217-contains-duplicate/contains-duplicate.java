class Solution {
    public boolean containsDuplicate(int[] nums) {
        Set<Integer> ans = new HashSet<Integer>();

        for(int n : nums){
            if(ans.contains(n)){
                return true;
            }
            ans.add(n);
        }
        return false;
    }
}