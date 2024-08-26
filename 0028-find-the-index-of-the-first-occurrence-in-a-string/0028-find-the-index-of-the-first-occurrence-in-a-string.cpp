class Solution {
public:
    int strStr(string haystack, string needle) {
        
        // for(int i=0; i<haystack.size(); i++){
        //     int j=0;
        //     for(; j<needle.size(); j++){
        //         if(haystack[i+j] != needle[j]){
        //             break;
        //         }
        //     }
        //     if(j==needle.size()){
        //         return i;
        //     }
        // }
        // return -1;
        
        
        int len1 = needle.size();
        int len2 = haystack.size();
        for(int i=0; i<len2; i++){
            if(haystack.substr(i,len1) == needle) return i;
        }
        return -1;
    }
};