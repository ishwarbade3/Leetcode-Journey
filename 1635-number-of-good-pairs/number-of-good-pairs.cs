public class Solution {
    public int NumIdenticalPairs(int[] nums) {
        // int  n = nums.Length;
        // int count= 0;

        // for(int i = 0; i < n ; i++){
        //     for(int  j = i+1 ; j < n ; j ++){
        //         if(nums[i]==nums[j]){
        //             count++;
        //         }
        //     }
        // }
        // return count;
        int[] count = new int[101];
        int pairs = 0;

        foreach (int num in nums) {
            pairs += count[num];
            count[num]++;
        }

        return pairs;
    }
}