class Solution {
public:
    int maxProduct(int n) {
        // int maxnum = INT_MIN;
        // int temp = n;
        // while (temp != 0) {
        //     int digit = temp % 10;
        //     temp /= 10;
        //     int num = temp;
        //     while (num != 0) {
        //         int innerdigit = num % 10;
        //         num /= 10;
        //         maxnum = max(maxnum, digit * innerdigit);
        //         cout << maxnum << endl;
        //     }
        // }

        // return maxnum;
        //      vector<int> digits;

        // while (n != 0) {
        //     digits.push_back(n % 10);
        //     n /= 10;
        // }

        // int maxnum = INT_MIN;

        // for (int i = 0; i < digits.size(); i++) {
        //     for (int j = i + 1; j < digits.size(); j++) {
        //         maxnum = max(maxnum, digits[i] * digits[j]);
        //     }
        // }

        // return maxnum;
          int first = -1, second = -1;

    while (n != 0) {
        int digit = n % 10;

        if (digit >= first) {
            second = first;
            first = digit;
        } else if (digit > second) {
            second = digit;
        }

        n /= 10;
    }

    return first * second;
    }
};