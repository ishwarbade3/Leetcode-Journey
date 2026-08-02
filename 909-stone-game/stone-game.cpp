class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        // int n= piles.size()-1;
        // int start =0;
        // int end =n;
        // int aSum=0;
        // int bSum=0;
        // bool gamestart=true;
         
        //  while(start<=end){

        //     if(gamestart){
        //         if(piles[start]>=piles[end]){
        //             aSum+=piles[start++];
        //             gamestart=false;
        //         }
        //         else{
        //              aSum+=piles[end--];
        //             gamestart=false;

        //         }
        //     }
        //     else{
        //         if(piles[start]>=piles[end]){
        //             bSum+=piles[start++];
        //             gamestart=true;
        //         }
        //         else{
        //              bSum+=piles[end--];
        //             gamestart=true;

        //         }
        //     }

        //  }
        //  return aSum>bSum;
        //  int n = piles.size();

        // vector<vector<int>> dp(n, vector<int>(n, 0));

        // for (int i = 0; i < n; i++)
        //     dp[i][i] = piles[i];

        // for (int len = 2; len <= n; len++) {
        //     for (int i = 0; i <= n - len; i++) {
        //         int j = i + len - 1;

        //         dp[i][j] = max(
        //             piles[i] - dp[i + 1][j],
        //             piles[j] - dp[i][j - 1]
        //         );
        //     }
        // }

        // return dp[0][n - 1] > 0;
        return true;
    }
};