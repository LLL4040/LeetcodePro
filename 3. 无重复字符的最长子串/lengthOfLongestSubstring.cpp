class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0, size = s.length(), i = 0;
        bool flag = true;
        while(i < size) {
            flag = true;
            string tmp = "";
            tmp += s[i];
            for(int j = i + 1; j < size; j++) {
                int x = tmp.find(s[j]);
                if(x == string::npos) {
                    tmp += s[j];
                }
                else {
                    flag = false;
                    i += x + 1;
                    break;
                }
            }
            if(flag) i++;
            int tmps = tmp.length();
            len = tmps > len ? tmps : len;
        }
        return len;
    }
};