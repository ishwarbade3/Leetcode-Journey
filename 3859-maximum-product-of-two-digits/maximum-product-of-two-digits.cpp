class Solution {
public:
    int maxProduct(int n) {
        int maxnum = INT_MIN;

        while (n != 0) {
            int digit = n % 10;
            n /= 10;
            int num = n;
            while (num != 0) {
                int innerdigit = num % 10;
                num /= 10;
                maxnum = max(maxnum, digit * innerdigit);
                cout<<maxnum<<endl;
            }
        }

        return maxnum;
    }
};