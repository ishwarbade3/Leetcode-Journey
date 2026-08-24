class Solution {
private:
    bool isValid(const string& str) {
        int balance = 0;
        for (char ch : str) {
            if (ch == '(')
                balance++;
            else
                balance--;
                if (balance < 0) return false;
        }
        return balance == 0;
    }
     void generateAll(string& curr ,int n,vector<string>& result){
        if(curr.length()==2*n){
            if(isValid(curr)){
                result.push_back(curr);
            }
            return;
        }
        curr.push_back('(');
        generateAll(curr,n,result);
        curr.pop_back();

        curr.push_back(')');
        generateAll(curr,n,result);
        curr.pop_back();
     }

public:
    vector<string> generateParenthesis(int n) {
        vector<string>result;
        string ans="";
        generateAll(ans,n,result);
        return result;
    }
};