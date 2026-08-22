class Solution {
public:
    bool isValid(string s) {
        stack<char> parantezyigini;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '['){
                parantezyigini.push(c);
            }
            else{
                if(parantezyigini.empty()) return false;

                char tepe = parantezyigini.top();
                parantezyigini.pop();

                if (c == ')' && tepe != '(') return false;
                if (c == '}' && tepe != '{') return false;
                if (c == ']' && tepe != '[') return false;
            }
        }
        return parantezyigini.empty();
    }
};
