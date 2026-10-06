public class Solution {
   public int SmallestIndex(int[] nums)
{
    for (int i = 0; i < nums.Length; i++)
    {
        int n = nums[i];
        int sum = 0;

        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }

        if (sum == i)
            return i;
    }

    return -1;
}
}