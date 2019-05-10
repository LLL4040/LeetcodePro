class Solution {
public:
    string intToRoman(int num) {
        string re = "";
        int x = 0;
        if(num >= 1000) {
            x = num / 1000;
            for(int i = 0; i < x; i++) re += 'M';
            num %= 1000;
        }
        if(num >= 100) {
            x = num / 100;
            if(x == 9) re += "CM";
            else if(x >= 5) {
                re += 'D';
                x -= 5;
            }
            else if(x == 4) re += "CD";
            if(x < 4) for(int i = 0; i < x; i++) re += 'C';
            num %= 100;
        }
        if(num >= 10) {
            x = num / 10;
            if(x == 9) re += "XC";
            else if(x >= 5) {
                re += 'L';
                x -= 5;
            }
            else if(x == 4) re += "XL";
            if(x < 4) for(int i = 0; i < x; i++) re += 'X';
            num %= 10;
        }
        if(num >= 1) {
            x = num;
            if(x == 9) re += "IX";
            else if(x >= 5) {
                re += 'V';
                x -= 5;
            }
            else if(x == 4) re += "IV";
            if(x < 4) for(int i = 0; i < x; i++) re += 'I';
        }
        return re; 
    }
};