class Solution {
    public:
        bool isValid(string s) {
            int length_s = s.length();
            stack<char> st;
            int num = 0;
            for(int i=0;i<length_s;i++)
            {
                if(s[i] == '(' || s[i]== '{' || s[i]== '[')
                {
                    st.push(s[i]);
                }
                else
                {
                    if(st.size()!=0)
                    {
                        char c = st.top();
                    
                    if( (c == '(' && s[i] == ')') || (c == '{' && s[i] == '}') || (c == '[' && s[i] == ']'))
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                    }
                    else
                    {
                        num = num+1;
                    }
                }
                
            }
            if(st.size()==0 && num == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    };