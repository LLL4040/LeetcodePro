class Solution {
public:
    bool isValid(string s) {
        int len = s.size();
        stack<char> tmp;
        for(int i = 0; i < len; i++){
            switch(s[i]){
                case '(':
                case '{':
                case '[':
                    tmp.push(s[i]);
                    break;
                case ')':
                    if(!tmp.empty() && tmp.top() == '(') tmp.pop();
                    else return false;
                    break;
                case '}':
                    if(!tmp.empty() && tmp.top() == '{') tmp.pop();
                    else return false;
                    break;
                case ']':
                    if(!tmp.empty() && tmp.top() == '[') tmp.pop();
                    else return false;
                    break;
            }
        }
        return tmp.empty();
    }
};