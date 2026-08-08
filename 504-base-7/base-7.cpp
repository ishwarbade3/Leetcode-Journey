class Solution {
public:
    string convertToBase7(int num) {
         if (num == 0) return "0";

        bool negative = num < 0;
        if (negative) num = -num;

        string result;

        while (num > 0) {
            result += char('0' + (num % 7));
            num /= 7;
        }

        if (negative) result += '-';

        reverse(result.begin(), result.end());
        return result;
    }
};