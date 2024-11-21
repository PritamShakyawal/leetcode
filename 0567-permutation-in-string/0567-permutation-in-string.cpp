class Solution {
public:
    bool checkInclusion(string s1, string s2) {
//         if (s1.size() > s2.size()) return false;

//     vector<int> s1map(26, 0), s2map(26, 0);

//     for (int i = 0; i < s1.size(); i++) {
//         s1map[s1[i] - 'a']++;
//         s2map[s2[i] - 'a']++;
//     }

//     int count = 0;
//     for (int i = 0; i < 26; i++) {
//         if (s1map[i] == s2map[i]) count++;
//     }

//     for (int i = 0; i < s2.size() - s1.size(); i++) {
//         int r = s2[i + s1.size()] - 'a';
//         int l = s2[i] - 'a';
//         if (count == 26) return true;

//         s2map[r]++;
//         if (s2map[r] == s1map[r]) {
//             count++;
//         } else if (s2map[r] == s1map[r] + 1) {
//             count--;
//         }

//         s2map[l]--;
//         if (s2map[l] == s1map[l]) {
//             count++;
//         } else if (s2map[l] == s1map[l] - 1) {
//             count--;
//         }
//     }
//     return count == 26;
        
        if(s1.size()>s2.size()) return false;
        unordered_map<char,int>m1,m2;
        for(auto i:s1)
            m1[i]++;
        int n = s1.size();
        for(int i=0;i<n;i++)
            m2[s2[i]]++;
        if(m1==m2) return true;

        for(int i=n;i<s2.size();i++){
            m2[s2[i]]++;
            m2[s2[i-n]]--;
            if(m2[s2[i-n]]==0) m2.erase(s2[i-n]);
            if(m1==m2) return true;
        }

        return false;
        
        
}
};