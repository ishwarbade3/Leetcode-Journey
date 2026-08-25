class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
         set<int>ans;

        for(int n : nums){
            ans.insert(n);
        }
        int i =k;
       for(int i= k ; ; i+=k){
            if(i%k==0){
                if(!ans.contains(i)){
                    return i;
                }
            }else{
                i+=k;
            }

        }
        return -1;
    }
};