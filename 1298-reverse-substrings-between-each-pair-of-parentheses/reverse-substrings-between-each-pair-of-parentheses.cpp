class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        string result;

        for(char & ch : s){
            if(ch == '('){
                st.push(result.length());
            }
            else if(ch == ')'){
                int l = st.top();
                st.pop();
                reverse(result.begin()+l , result.end());
            }
            else{
                result.push_back(ch);
            }
        }
        return result ;
        
    }
};