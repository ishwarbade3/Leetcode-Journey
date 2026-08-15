public class Solution {
    public int MaximumLengthSubstring(string s) {
        Dictionary<char,int> map =new Dictionary<char,int>();
        int i =0 , j = 0 , ans = 0;
        while(j<s.Length){
            if(map.ContainsKey(s[j]))
            map[s[j]]++;
            else
                map[s[j]]=1;
            while(map[s[j]]>2){
                map[s[i]]--;
                i++;
            }
            ans = Math.Max(ans,j-i+1);
            j++;

        }
        return ans;
        
    }
}