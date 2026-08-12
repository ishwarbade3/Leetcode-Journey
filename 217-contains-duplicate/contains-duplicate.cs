public class Solution {
    public bool ContainsDuplicate(int[] nums) {
        HashSet<int> ans = new HashSet<int>();

        foreach (int n in nums)
            if(!ans.Add(n))return true;
        
        return false;
    }
}