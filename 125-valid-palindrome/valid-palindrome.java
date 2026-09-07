class Solution {

    private boolean isAlpha(char ch) {
        return (ch >= 'A' && ch <= 'Z') ||
                (ch >= 'a' && ch <= 'z') ||
                (ch >= '0' && ch <= '9');
    }

    public boolean isPalindrome(String s) {

        int start = 0;
        int end = s.length() - 1;
        while (start < end) {

            while (start < end && !isAlpha(s.charAt(start))) {
                start++;
            }
            while (start < end && !isAlpha(s.charAt(end))) {
                end--;
            }
            char left = Character.toLowerCase(s.charAt(start));
            char right = Character.toLowerCase(s.charAt(end));

            if (left != right) {
                return false;
            }
            start++;
            end--;
        }

        return true;
    }
}