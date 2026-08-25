class Solution {
public:
    bool isValid(string s) {

        stack<char> ans;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                ans.push(s[i]);
            } else {
                if (ans.empty()) {
                    return false;
                }

                char ch = ans.top();
                ans.pop();

                if ((s[i] == ')' && ch != '(') || (s[i] == '}' && ch != '{') ||
                    (s[i] == ']' && ch != '[')) {
                    return false;
                }
            }
        }
        return ans.empty();
    }
};