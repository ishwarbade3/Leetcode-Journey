class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int freq[10] = {};

        // Count frequency of each digit
        for (int digit : digits) {
            freq[digit]++;
        }

        int ans = 0;

        // Choose the last digit
        for (int last = 0; last <= 8; last += 2) {

            if (freq[last] == 0)
                continue;

            // Use one copy of last digit
            freq[last]--;

            // Choose the first digit
            for (int first = 1; first <= 9; first++) {

                if (freq[first] == 0)
                    continue;

                freq[first]--;

                // Choose the middle digit
                for (int middle = 0; middle <= 9; middle++) {

                    if (freq[middle] > 0) {
                        ans++;
                    }
                }

                // Put first digit back
                freq[first]++;
            }

            // Put last digit back
            freq[last]++;
        }

        return ans;
    }
};