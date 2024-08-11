class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int>mp;
        priority_queue<int>maxHeap;
        int target = arr.size() / 2; 
        int removed = 0;
        int setSize = 0;
    
        for(auto&num : arr){
            mp[num]++;
        }
        
        for (auto&x : mp){
                maxHeap.push(x.second);
            }
        
        while(removed < target){
            int freq = maxHeap.top();
            maxHeap.pop();
            removed+=freq;
            setSize++;
        }
        return setSize;
    }
};