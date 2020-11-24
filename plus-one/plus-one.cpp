class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int c = 1;
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i] == 9 && c){
                digits[i] = 0;
                c = 1;
            } else {
                digits[i] += c;
                c = 0;            
            }
        }
        if(c == 1) 
            digits.insert(digits.begin(),1);
        return digits;
    }
};