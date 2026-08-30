class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> ans;
        for(int n : nums){
            if(ans.contains(n)){
                return true;
            }
            ans.insert(n);
        }
        return false;
    }
};