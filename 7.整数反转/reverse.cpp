#define MAX ((1 << 31) - 1)
#define MIN (1 << 31)
class Solution {
public:
    int reverse(int x) {
        string num = to_string(x);
        int rx = 0, i = num.length() - 1;
        if(x < 0) {
            while(i > 0) {
                int tmp = num[i] - '0';
                if(rx < (MIN + tmp) / 10.0)
                    return 0;
                rx = rx * 10 - tmp;
                i--;
            }
        }
        else {
            while(i >= 0) {
                int tmp = num[i] - '0';
                if(rx > (MAX - tmp) / 10.0)
                    return 0;
                rx = rx * 10 + tmp;
                i--;
            }   
        }
        return rx;
    }
};