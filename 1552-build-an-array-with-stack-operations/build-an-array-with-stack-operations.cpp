class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {

        string push ="Push";
        string pop="Pop";
        vector<string> ans;
        int j =0;
        for(int i=1;i<=n && j < target.size();i++){
            if(i==target[j]){
                ans.push_back(push);
                j++;
            }
            else{
                ans.push_back(push);
                 ans.push_back(pop);
            }
        }
        return ans;
    }
};