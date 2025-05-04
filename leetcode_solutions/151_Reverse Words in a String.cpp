class Solution {
    public:
        string reverseWords(string s) {
            vector<string> words;
            int prev = 0;
            words.push_back("");
            int count = 0;
            for(int i = 0; i<s.length(); i++){
                if(s[i]!=' '){
                    words[count] = words[count] + s[i];
                }
                else{
                    if(i>0 && s[i-1]!=' '){
                        words.push_back(" ");
                        words.push_back("");
                        count++;
                        count++;
                    }
                    if(i == s.length()-1 && s[i] == ' '){
                        words.pop_back();
                        words.pop_back();
                        words.push_back("");
                    }
                }
                
            }
    
            s = "";
            while(!words.empty()){
                s = s + words.back();
                words.pop_back();
            }
    
            return s;
        }
    };