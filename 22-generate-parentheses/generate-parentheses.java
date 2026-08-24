class Solution {
    private void optimalSol(List<String> list,StringBuilder curr,int open ,int close,int n){
        if(curr.length()==2*n){
            list.add(curr.toString());
            return;
        }

        if(open < n){
            curr.append('(');
            optimalSol(list,curr,open + 1,close,n);
            curr.deleteCharAt(curr.length()-1);
        }
         if(close < open){
            curr.append(')');
            optimalSol(list,curr,open,close +1 ,n);
            curr.deleteCharAt(curr.length()-1);
        }


    }
    public List<String> generateParenthesis(int n) {
        List<String> result = new ArrayList<>();
        StringBuilder ans = new StringBuilder();

        optimalSol(result,ans,0,0,n);
        return result;
        
    }
}