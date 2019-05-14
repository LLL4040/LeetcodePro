class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string com = "";
        int len = strs.size();
        if(len == 0) return com;
        if(len == 1) return strs[0];
        int len1 = strs[0].size();
        for(int i = 0; i < len1; i++) {
            char tmp = strs[0][i];
            for(int j = 1; j < len; j++) {
                if(i >= strs[j].size() || strs[j][i] != tmp) return com;
            }
            com += tmp;
        }
        return com;
    }
};