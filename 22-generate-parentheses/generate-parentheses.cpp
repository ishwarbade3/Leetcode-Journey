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

     //Optimal solution*******
     void optimalSol(vector<string>& result ,string& curr , int open ,int close,int n){
        if(curr.length()== 2*n){
            result.push_back(curr);
            return;
        }
        if(open < n){
            curr.push_back('(');
            optimalSol(result,curr,open + 1,close,n);
            curr.pop_back();
        }
        if(close < open){
            curr.push_back(')');
            optimalSol(result,curr,open,close + 1,n);
            curr.pop_back();
        }

     }

public:
    vector<string> generateParenthesis(int n) {
        vector<string>result;
        string ans="";
        //generateAll(ans,n,result);
        optimalSol(result,ans,0,0,n);
        return result;
    }
};