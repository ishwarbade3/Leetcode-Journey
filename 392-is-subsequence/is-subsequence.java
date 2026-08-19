class Solution {
    public boolean isSubsequence(String s, String t) {
     
        int start0 = 0;
        int start1 = 0;

        while (start0 < s.length() && start1 < t.length()) {

            if (s.charAt(start0) == t.charAt(start1)) {
                start0++;
                start1++;
            } else {
                start1++;
            }
        }
        return start0 == s.length();   
    }
}