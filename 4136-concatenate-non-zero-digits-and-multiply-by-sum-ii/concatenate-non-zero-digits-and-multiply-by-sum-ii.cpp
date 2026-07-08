class Solution {
public:
    // vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
    //       const long long MOD = 1e9 + 7;
    //     vector<int> ans;

    //     for (int i = 0; i < queries.size(); i++) {

    //         int a = queries[i][0];
    //         int b = queries[i][1];
    //         long long num = 0;
    //         long long sum = 0;

    //         for (int j = a; j <= b; j++) {
    //             if (s[j] != '0') {
    //                 int digit = s[j] - '0';
    //                 num = (num * 10 + digit) % MOD;
    //                 sum += digit;
    //             }
    //         }

    //         ans.push_back((num * sum) % MOD);
    //     }

    //     return ans;
     static const int MOD = 1e9 + 7;

    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n = s.size();

        vector<int> pos, digit;
        vector<long long> prefSum(n + 1, 0);

        for (int i = 0; i < n; i++) {
            prefSum[i + 1] = prefSum[i];
            if (s[i] != '0') {
                pos.push_back(i);
                digit.push_back(s[i] - '0');
                prefSum[i + 1] += s[i] - '0';
            }
        }

        int k = digit.size();

        vector<long long> pw(k + 1, 1);
        for (int i = 1; i <= k; i++)
            pw[i] = (pw[i - 1] * 10) % MOD;

        vector<long long> prefNum(k + 1, 0);
        for (int i = 0; i < k; i++)
            prefNum[i + 1] = (prefNum[i] * 10 + digit[i]) % MOD;

        vector<int> ans;

        for (auto &q : queries) {
            int l = q[0], r = q[1];

            int L = lower_bound(pos.begin(), pos.end(), l) - pos.begin();
            int R = upper_bound(pos.begin(), pos.end(), r) - pos.begin();

            long long sum = prefSum[r + 1] - prefSum[l];

            if (L == R) {
                ans.push_back(0);
                continue;
            }

            long long num =
                (prefNum[R] - prefNum[L] * pw[R - L] % MOD + MOD) % MOD;

            ans.push_back(num * sum % MOD);
        }

        return ans;
    }
};