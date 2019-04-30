#define MAX ((1 << 31) - 1)
#define MIN (1 << 31)
class Solution {
public:
    int myAtoi(string str) {
        int flag = 0;
        if(str.length() == 0) return flag;
        
        int i = 0;
        int x = 0;
        while(str[i] == ' ') i++;
        if(str[i] != '+' && str[i] != '-' && (str[i] > '9' || str[i] < '0')) 
            return flag;
        switch(str[i]) {
            case '+':
                flag = 1;
                i++;
                break;
            case '-':
                flag = -1;
                i++;
                break;
            default:
                flag = 1;
                break;
        }
        while(str[i] != '\0') {
            if(str[i] >= '0' && str[i] <= '9') {
                int tmp = str[i] - '0';
                switch(flag) {
                    case 1:
                        if(x > (MAX - tmp) / 10.0)
                            return (1 << 31) - 1;
                        x = x * 10 + tmp;
                        break;
                    case -1:
                        if(x < (MIN + tmp) / 10.0)
                            return 1 << 31;
                        x = x * 10 - tmp;
                        break;
                }
            }
            if(str[i] < '0' || str[i] > '9')
                return x;
            i++;
        }
        return x;
    }
};