class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      //   int n = nums.size();
      //   vector<int> ans;
      //   unordered_map <int, int> m;
      //   int maxFre = 0;
      //   for(int i=0; i<n; i++){
      //       m[nums[i]]++;
      //       maxFre = m[nums[i]];
      //   }
      //   for(auto i: m){
      //   if(maxFre>1){
      //       ans.push_back(i.first);
      //       return ans;
      //   }
      //       else {
      //       ans.push_back(i.first);
      //       return ans;
      //       }
      // }
        
    unordered_map<int, int> freqMap;
    for (int num : nums) {
        freqMap[num]++;
    }

    priority_queue<pair<int, int>> maxHeap;
    for (auto entry : freqMap) {
        maxHeap.push({entry.second, entry.first});
    }
    vector<int> result;
    for (int i = 0; i < k; ++i) {
        if (!maxHeap.empty()) {
            result.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
    }

    return result;
    }
};