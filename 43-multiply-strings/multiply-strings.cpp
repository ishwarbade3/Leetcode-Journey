class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0")
        return "0";

    int n = num1.size();
    int m = num2.size();

    vector<int> ans(n + m, 0);

    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {

            int n1digit = num1[i] - '0';
            int n2digit = num2[j] - '0';

            int mul = n1digit * n2digit;

            int pos1 = i + j;
            int pos2 = i + j + 1;

            int sum = mul + ans[pos2];

            ans[pos2] = sum % 10;
            ans[pos1] += sum / 10;
        }
    }
    string result = "";

    for (int digit : ans) {
        if (result.empty() && digit == 0)
            continue;

        result += (digit + '0');
    }

    return result;
    }
};