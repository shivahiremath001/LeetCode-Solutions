class Solution {
public:
    char corr(char x){
        switch(x){
            case '(': return ')'; break;
            case '{': return '}'; break;
            case '[': return ']'; break;
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
        if (st.empty()) return true;
        else return false;
    }
};