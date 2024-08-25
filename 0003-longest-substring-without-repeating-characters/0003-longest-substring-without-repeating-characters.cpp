class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0)
         return 0;
  int maxans = INT_MIN;
  unordered_set < char > set;
  int l = 0;
  for (int r = 0; r < s.length(); r++)
  {
    if (set.find(s[r]) != set.end())
    {
      while (l < r && set.find(s[r]) != set.end()) {
        set.erase(s[l]);
        l++;
      }
    }
    set.insert(s[r]);
    maxans = max(maxans, r - l + 1);
  }
  return maxans;
        
        
        
        
        
        
//       vector < int > mpp(256, -1);
//       int left = 0, right = 0;
//       int n = s.size();
//       int len = 0;
//       while (right < n) {
//         if (mpp[s[right]] != -1)
//           left = max(mpp[s[right]] + 1, left);

//         mpp[s[right]] = right;

//         len = max(len, right - left + 1);
//         right++;
//       }
//       return len;
        
        
        
        
//     if(s.size()==0)
//       return 0;
//   int maxans = INT_MIN;
//   for (int i = 0; i < s.length(); i++)
//   {
//     unordered_set < int > set;
//     for (int j = i; j < s.length(); j++) 
//     {
//       if (set.find(s[j]) != set.end())
//       {
//         maxans = max(maxans, j - i);
//         break;
//       }
        
//       set.insert(s[j]);
//     }
//   }
//   return maxans;
    }
};