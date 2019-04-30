class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        
        vector<string> tmp(min(numRows, int(s.length())));
        string zs = "";
        int i = 0, flag = 1, line = numRows - 1;
        for(char x : s) {
            tmp[i] += x;
            if(i == 0) {
                flag = 1;
            }else if(i == line) {
                flag = -1;
            }
            i = (flag == 1) ? i+1 : i-1;
        }
        for(string x : tmp) {
            zs += x;
        }
        return zs;
    }
};