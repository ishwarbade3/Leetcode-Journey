class Solution {
    public String removeStars(String s) {

        Stack<Character> bala = new Stack<>();

        for(int i =0 ; i < s.length();i++){
            if(s.charAt(i)=='*'){
                bala.pop();
            }
            else{
                bala.push(s.charAt(i));
            }
        }
        StringBuilder s1 = new StringBuilder("");
        while(!bala.isEmpty()){
            s1.append(bala.pop());
        }
        return s1.reverse().toString();
        
        
    }
}