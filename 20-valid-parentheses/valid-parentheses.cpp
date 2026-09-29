class Solution {
public:
    char corr(char x){
        switch(x){
            case '(': return ')';
            case '{': return '}';
            case '[': return ']';
        }
        return ']';
    }

    bool isValid(string s) {
        stack<char> st;
        for (char i: s){
            if (i == '(') st.push(')');
            else if (i == '[') st.push(']');
            else if (i == '{') st.push('}');
            else if (!st.empty() && i == st.top()) st.pop();
            else return false;
        }
        return st.empty();
    }
};