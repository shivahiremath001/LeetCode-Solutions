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
            if (i == '(' || i == '[' || i == '{') st.push(i);
            else if (!st.empty() && i == corr(st.top())) st.pop();
            else return false;
        }
        return st.empty();
    }
};