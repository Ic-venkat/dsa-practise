class Solution {
    public:
        void reverseString(vector<char>& s) {
            vector<char> copy = s;
            for(int i=0; i<s.size(); i++){
                s[i] = copy[s.size() - i -1];
            }
        }
    };