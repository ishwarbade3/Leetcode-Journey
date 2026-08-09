class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // vector<int>ans;

        // int i=1;
        // int j=1;

        // int n1 =num1.size();
        // int n2=num2.size();

        // whie(i<n1&&j<n2){
        //     if(nums1[i-1]==nums2[j-1]&&nums1[i]==nums2[j]){
        //         nums
        //     }
        // }
        unordered_map<int, int> freq;
        vector<int> result;

        for (int num : nums1) {
            freq[num]++;
        }
        for (int num : nums2) {
            if (freq[num] > 0) {
                result.push_back(num);
                freq[num]--;
            }
        }

        return result;
    }
};