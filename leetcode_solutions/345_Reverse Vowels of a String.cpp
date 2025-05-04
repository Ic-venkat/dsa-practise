class Solution {
    public:
        string reverseVowels(string s) {
            vector<int> loc;
            for(int i =0; i<s.length(); i++){
                if(s[i] == 'A' || s[i] == 'a'){
                    loc.push_back(i);
                }
                if(s[i] == 'E' || s[i] == 'e'){
                    loc.push_back(i);
                }
                if(s[i] == 'I' || s[i] == 'i'){
                    loc.push_back(i);
                }
                if(s[i] == 'O' || s[i] == 'o'){
                    loc.push_back(i);
                }
                if(s[i] == 'U' || s[i] == 'u'){
                    loc.push_back(i);
                }
            }
    
            string copy = s;
            for(int i=0; i<loc.size()/2; i++){
                char temp = s[loc[i]];
                s[loc[i]] = s[loc[loc.size()-i -1]];
                s[loc[loc.size()-i -1 ]] = temp;
            }
    
            return s;
        }
    };