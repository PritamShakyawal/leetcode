#include <algorithm>
#include <string>
class Solution {
public:
    bool isAnagram(string s, string t) {
        std::sort(s.begin(), s.end());
    std::sort(t.begin(), t.end());
        
    return s==t;
    
    // if (s.size() != t.size()) {
    //         return false;
    //     }
    //     unordered_map<char, int> sMap, tMap;
    //     for (char c : s) {
    //         sMap[c]++;
    //     }
    //     for (char c : t) {
    //         tMap[c]++;
    //     }
    //     return sMap == tMap;
    }
};