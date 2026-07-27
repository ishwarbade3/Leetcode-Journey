public class Solution {
    public int MaxProduct(int[] nums) {
        int first = 0, second = 0;

        foreach (int num in nums) {
            if (num > first) {
                second = first;
                first = num;
            } else if (num > second) {
                second = num;
            }
        }

        return (first - 1) * (second - 1); 
    }
}