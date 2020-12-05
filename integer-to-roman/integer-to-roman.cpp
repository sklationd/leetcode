class Solution {
public:
    string intToRoman(int num) {
        string result = "";
        if(num / 1000){
            result.append(num/1000, 'M');
            num %= 1000;
        }
        
        if(num >= 900){
            result.append("CM");
            num -= 900;
        }
        if(num >= 500){
            result.append("D");
            num -= 500;
        }
        if(num >= 400){
            result.append("CD");
            num -= 400;
        }
        if(num / 100){
            result.append(num/100,'C');
            num %= 100;
        }
        
        if(num >= 90){
            result.append("XC");
            num -= 90;
        } 
        if(num >= 50){
            result.append("L");
            num -= 50;
        }
        if(num >= 40){
            result.append("XL");
            num -= 40;
        }
        if(num / 10){
            result.append(num/10, 'X');
            num %= 10;
        }
        
        if(num >= 9){
            result.append("IX");
            num -= 9;
        }
        if(num >= 5){
            result.append("V");
            num -= 5;
        }
        if(num >= 4){
            result.append("IV");
            num -= 4;
        }
        if(num >= 1){
            result.append(num / 1, 'I');
            num %= 1;
        }
        return result;
    }
};