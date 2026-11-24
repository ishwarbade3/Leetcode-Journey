class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;

        for (int i = 0; i < n; i++) {
            long long prod = 1;
            long long g = 0;
            long long l = 1;

            for (int j = i; j < n; j++) {
                long long x = nums[j];

                g = gcd(g, x);

                // Check product overflow
                if (prod > LLONG_MAX / x)
                    break;

                prod *= x;

                // Calculate LCM safely
                long long d = gcd(l, x);

                if (l / d > LLONG_MAX / x)
                    break;

                l = (l / d) * x;

                // Check product equivalent condition
                if (g <= LLONG_MAX / l && prod == g * l) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};