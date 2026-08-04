public class Solution {
    public string AddStrings(string num1, string num2) {
    int i = num1.Length-1;
    int j = num2.Length-1;
    int carry=0;
    StringBuilder ans = new StringBuilder();
    while(i>=0||j>=0||carry!=0){
        int sum = carry;
            if (i >= 0) {
                sum += num1[i--]- '0';
            }
            if (j >= 0) {
                sum += num2[j--] - '0';
            }
            ans.Append(sum%10);
            carry = sum/10;
     }
    char[] ch = ans.ToString().ToCharArray();
    Array.Reverse(ch);
     return new string(ch);
    }
}