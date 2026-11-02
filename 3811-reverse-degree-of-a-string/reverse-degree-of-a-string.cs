public class Solution {
    public int ReverseDegree(string s) {
        int sum = 0;

        for (int i = 0; i < s.Length; i++) {
            int reversePosition = 'z' - s[i] + 1;
            int stringPosition = i + 1;

            sum += reversePosition * stringPosition;
        }

        return sum;
    }
}