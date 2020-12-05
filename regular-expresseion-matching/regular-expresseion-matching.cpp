class Solution {
public:
    string pattern2regex(string &p){
        int index = 0;
        string reg = "";
        while(index < p.size()){
            if(p[index] == '*'){
                reg.append("*");
            } else if(p[index] == '.') {
                reg.append("[a-z]");
            } else {
                reg.append(1, p[index]);
            }
            index++;
        }
        return reg;
    }
    
    bool isMatch(string s, string p) {
        regex reg(pattern2regex(p));
        return regex_match(s, reg);
    }
};