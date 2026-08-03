class Solution {
public:
    bool isHappy(int n) {

          int num = n;

    while (num != 1 && num != 4) {
        int sum = 0;

        while (num != 0) {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }

        num = sum;
    }

    return num == 1;
    }
};