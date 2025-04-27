class Solution {
    private:
        string arr[3];
    
    public:
        int evalRPN(vector<string>& tokens) {
            stack<int> s;
            for (int i = 0; i < tokens.size(); i++) {
                if (!tokens[i].empty() && isdigit(tokens[i][0]) || (tokens[i][0] == '-' && tokens[i].size() > 1)) {
                    s.push(stoi(tokens[i]));
                } else {
                    int operand2 = s.top(); 
                    s.pop();
                    int operand1 = s.top();
                    s.pop();
                    if (tokens[i] == "+") {
                        s.push(operand1 + operand2);
                    } else if (tokens[i] == "-") {
                        s.push(operand1 - operand2);
                    } else if (tokens[i] == "*") {
                        s.push(operand1 * operand2);
                    } else if (tokens[i] == "/") {
                        s.push(operand1 / operand2);
                    }
                }
            }
            return s.top();
        }
    };