public class Solution {
    public bool IsSubsequence(string s, string t) {
        int start0 = 0;
        int start1 = 0;

        while (start0 < s.Length && start1 < t.Length) {

            if (s[start0] == t[start1]) {
                start0++;
                start1++;
            } else {
                start1++;
            }
        }
        return start0 == s.Length;   
    }
}