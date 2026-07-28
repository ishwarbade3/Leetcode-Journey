public class Solution {
    public string SmallestPalindrome(string s) {
          int[] freq = new int[26];

        foreach (char c in s)
        {
            freq[c - 'a']++;
        }

        StringBuilder firstHalf = new StringBuilder();
        string middle = "";

        for (int i = 0; i < 26; i++)
        {
            firstHalf.Append(new string((char)('a' + i), freq[i] / 2));

            if (freq[i] % 2 == 1)
            {
                middle = ((char)('a' + i)).ToString();
            }
        }

        char[] secondHalf = firstHalf.ToString().ToCharArray();
        Array.Reverse(secondHalf);

        return firstHalf.ToString() + middle + new string(secondHalf);
    }
}