class Solution {
public:
    int myAtoi(string s) {
        int  num = 0;
        int sign = 1;
        int i = 0;
        int intMax = INT_MAX;
        int intMin = INT_MIN;
        
        while(i<s.length() && s[i] == ' '){
            i++;
        }
        if(i<s.length() && (s[i]=='-' || s[i]=='+')){
            sign = (s[i]=='-') ? -1 : 1;
            i++;
        }
        while(i<s.size() && isdigit(s[i])){
            int digit = s[i] - '0';
        
        // Check if num * 10 + digit would cause overflow
        if (num > (intMax - digit) / 10){
            return (sign == 1) ? intMax : intMin;
        }

        num = num * 10 + digit;
        i++;
        }
        
        return num*sign;
    }
};