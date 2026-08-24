class Solution {
    public int lengthOfLongestSubstring(String s) {
        Set<Character> ans = new HashSet<Character>();

        int left = 0;
        int maxlength = 0;
        for (int i = 0; i < s.length(); i++) {
            while (ans.contains(s.charAt(i))) {
                ans.remove(s.charAt(left));
                left++;
            }
            ans.add(s.charAt(i));

            maxlength = Math.max(maxlength, i - left + 1);
        }
        return maxlength;
    }
}