class Solution {
    private:
    bool isVowel(char ch) {
    char Character = tolower(ch);
    if(Character == 'a' || Character == 'e' || Character == 'i' || Character == 'o' || Character == 'u') return true;
    return false;
}
public:
    string reverseVowels(string s) {
        int start = 0; int end = s.size()-1;
       while(start<end){
           bool isLeftVowel = isVowel(s[start]);
           bool isRightVowel = isVowel(s[end]);
           if(isLeftVowel && isRightVowel){
               swap(s[start], s[end]);
               start++, end--;
           }
            else if(!isLeftVowel) start++;
            else if(!isRightVowel) end--;
       }
       return s;
    }
};