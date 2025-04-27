class Solution {
    private:
        int top;
    
    public:
        Solution() { top = 0; }
        bool isValid(string s) {
            string cars = "";
            for (int i = 0; i < s.length(); i++) {
                if (top == 0 && (s[i] == ']' || s[i] == '}' || s[i] == ')')) {
                    return false;
                } else if (s[i] == '[' || s[i] == '{' || s[i] == '(') {
                    cars.push_back(s[i]);
                    top++;
                } else {
                    char a = cars.back();
                    cars.pop_back();
                    top--;
                    if (a == '{' && s[i] == '}') {
                        continue;
                    } else if (a == '[' && s[i] == ']') {
                        continue;
                    } else if (a == '(' && s[i] == ')') {
                        continue;
                    }
                    else{
                        return false;
                    }
                }
            }
            cout<< cars << endl;
            return cars.empty();
        }
    };