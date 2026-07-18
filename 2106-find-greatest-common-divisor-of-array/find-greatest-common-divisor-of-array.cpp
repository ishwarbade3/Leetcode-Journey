class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxnum =INT_MIN;
        int minnum = INT_MAX; 
        for(int i =0; i< nums.size();i++){
            if(nums[i]>maxnum){
                maxnum=nums[i];
            }
             if(nums[i]<minnum){
                minnum=nums[i];
            }
            
        }
       for (int i = minnum; i >= 1; i--) {
        if (minnum % i == 0 && maxnum % i == 0) {
            return i;
        }
    }

    return 1;
        
    }
};