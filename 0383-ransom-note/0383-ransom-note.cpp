class Solution {
public:
   bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> ransomCount;
        unordered_map<char, int> magazineCount;
        
        for (char c : ransomNote) {
            ransomCount[c]++;
        }
        
        for (char c : magazine) {
            magazineCount[c]++;
        }
        
        for (auto& entry : ransomCount) {
            char c = entry.first;
            int count = entry.second;
            
            if (magazineCount[c] < count) {
                return false;
            }
        }
        
        return true;
    }
};