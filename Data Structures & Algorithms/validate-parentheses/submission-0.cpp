class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                brackets.push(c);
            } else if (c == ')' && !brackets.empty() && brackets.top() == '(') {
                brackets.pop();
            } else if (c == '}' && !brackets.empty() && brackets.top() == '{') {
                brackets.pop();
            } else if (c == ']' && !brackets.empty() && brackets.top() == '[') {
                brackets.pop();
            } else {
                return false;
            }
        }

        return brackets.empty();
    }
};