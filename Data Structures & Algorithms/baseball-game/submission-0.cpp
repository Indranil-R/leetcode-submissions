class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> scores;
        int sum = 0;
        for (string op : operations) {
            if (op == "D") {
                int p = scores.top();
                scores.push(p * 2);
            } else if (op == "C") {
                scores.pop();
            } else if (op == "+") {
                int first = scores.top();
                scores.pop();
                int second = scores.top();
                scores.push(first);
                scores.push(first + second);
            } else {
                scores.push(stoi(op));
            }
        }

        while (!scores.empty()) {
            sum += scores.top();
            scores.pop();
        }
        return sum;
    }
};