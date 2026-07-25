class Solution {
    public int maxProduct(int n) {
        int maxnum = Integer.MIN_VALUE;
         int temp = n;

        while (temp != 0) {
            int digit = temp % 10;
            temp /= 10;
            int num = temp;
            while (num != 0) {
                int innerdigit = num % 10;
                num /= 10;
                maxnum = Math.max(maxnum, digit * innerdigit);
            }
        }

        return maxnum;
    }
}