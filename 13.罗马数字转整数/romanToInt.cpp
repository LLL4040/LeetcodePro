class Solution {
public:
    int romanToInt(string s) {
        int num = 0, i = 0, j = 0;
        int len = s.length();
        while(i < len) {
            switch(s[i]) {
                case 'I':
                    j = i + 1;
                    if(j < len) {
                        switch(s[j]) {
                            case 'V':
                                num += 4;
                                i = j;
                                break;
                            case 'X':
                                num += 9;
                                i = j;
                                break;
                        }
                    }
                    num += (i == j) ? 0 : 1;
                    break;
                case 'V':
                    num += 5;
                    break;
                case 'X':
                    j = i + 1;
                    if(j < len) {
                        switch(s[j]) {
                            case 'L':
                                num += 40;
                                i = j;
                                break;
                            case 'C':
                                num += 90;
                                i = j;
                                break;
                        }
                    }
                    num += (i == j) ? 0 : 10;
                    break;
                case 'L':
                    num += 50;
                    break;
                case 'C':
                    j = i + 1;
                    if(j < len) {
                        switch(s[j]) {
                            case 'D':
                                num += 400;
                                i = j;
                                break;
                            case 'M':
                                num += 900;
                                i = j;
                                break;
                        }
                    }
                    num += (i == j) ? 0 : 100;
                    break;
                case 'D':
                    num += 500;
                    break;
                case 'M':
                    num += 1000;
                    break;
            }
            i++;
        }
        return num;
    }
};