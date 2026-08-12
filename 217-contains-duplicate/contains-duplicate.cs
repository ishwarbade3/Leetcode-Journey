public class Solution {
    public bool ContainsDuplicate(int[] nums) {
        // HashSet<int> ans = new HashSet<int>();

        // foreach (int n in nums)
        //     if(!ans.Add(n))return true;
        
        // return false;
          HashSet<int> seen = new HashSet<int>();

        foreach (int num in nums) {
            if (seen.Contains(num)) {
                return true;
            }

            seen.Add(num);
        }

        return false;
    }
}