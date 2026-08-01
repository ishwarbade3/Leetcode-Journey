// class Solution {
// public:
//     bool predictTheWinner(vector<int>& nums) {
//         // int n = nums.size();
//         // int first = 0;
//         // int last = n-1;

//         // int player1Sum = 0;
//         // int player2Sum = 0;
//         // bool flag = false;

//         // while (first <= last) {
//         //     if (flag == false) {
//         //         if (nums[first] > nums[last]) {
//         //             player1Sum += nums[first];
//         //             first++;
//         //             flag = true;
//         //         } else {
//         //             player1Sum += nums[last];
//         //             last--;
//         //             flag = true;
//         //         }
//         //     } else {
//         //         if (nums[first] > nums[last]) {
//         //             player2Sum += nums[first];
//         //             first++;
//         //             flag = false;
//         //         } else {
//         //             player2Sum += nums[last];
//         //             last--;
//         //             flag = false;
//         //         }
//         //     }
//         // }

//         // return player1Sum >= player2Sum;
//          int n = nums.size();
//         int first = 0;
//         int last = n - 1;

//         int player1Sum = 0;
//         int player2Sum = 0;
//         bool flag = false;

//         while (first <= last) {
//             if (!flag) {
//                 if (nums[first] > nums[last]) {
//                     player1Sum += nums[first];
//                     first++;
//                 } else {
//                     player1Sum += nums[last];
//                     last--;
//                 }
//             } else {
//                 if (nums[first] > nums[last]) {
//                     player2Sum += nums[first];
//                     first++;
//                 } else {
//                     player2Sum += nums[last];
//                     last--;
//                 }
//             }
//             flag = !flag;
//         }

//         return player1Sum >= player2Sum;
//     }
// };
class Solution {
public:
    vector<vector<int>> dp;

    int solve(vector<int>& nums, int i, int j) {
        if (i == j)
            return nums[i];

        if (dp[i][j] != -1)
            return dp[i][j];

        int pickLeft = nums[i] - solve(nums, i + 1, j);
        int pickRight = nums[j] - solve(nums, i, j - 1);

        return dp[i][j] = max(pickLeft, pickRight);
    }

    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        dp.assign(n, vector<int>(n, -1));

        return solve(nums, 0, n - 1) >= 0;
    }
};