class Solution {
public:
    bool isValid(string s) {
        // whenever  opening brackets put it into stack and when closed pop the last preserved brackets if it gets matched then okay , i.e every opening must have a closing bracket
        stack<char> st;

        for( int i =0; i <s.size(); i++){
            if(s[i] == '('|| s[i] == '{' || s[i] == '[' ){ 
             st.push(s[i]);
            }else{
                if(st.empty()){
                    return false;
                }

                if( (st.top() == '(' && s[i] == ')') ||
                   ( st.top() == '{' && s[i] == '}') ||
                   (st.top() == '[' && s[i] == ']')) {
                        st.pop();
                    }else{
                        return false;
                    }
                
            }
        }

     return st.size() == 0; 
    }
};