public class Solution {
    public IList<string> BuildArray(int[] target, int n) {
        IList<string> ans = new List<string>();
        int j = 0;
        for (int i = 1; i <= n && j < target.Length; i++) {
            if (i == target[j]) {
                ans.Add("Push");
                j++;
            } else {
                ans.Add("Push");
                ans.Add("Pop");
            }
        }
        return ans;
    }
}