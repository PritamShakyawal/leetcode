class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
//         int n= stones.size();
//         if(n==1) return 1;
//         priority_queue<int> pq;
//         for(int i=0; i<n; i++){
//             pq.push(stones[i]);
//         }
//         while(!pq.empty()){
//             int a = pq.top();
//             pq.pop();
//             int b = pq.top();
//             pq.pop();
//             if(a>b){
//                 a = a-b;
//                 pq.push(a);
//             }
//             if(a<b){
//                 b = b-a;
//                 pq.push(a);
//             }
//             if(a==b){ 
//                 a=0;
//                 b=0;
//         }
           
//     }
//         if(pq.size()==1) return pq.top();
//          return pq.top();
        
        priority_queue<int> maxHeap(stones.begin(),stones.end());
        while(maxHeap.size() > 1){
            int y = maxHeap.top();
            maxHeap.pop();
            int x = maxHeap.top();
            maxHeap.pop();
            if(x != y){
                maxHeap.push(y - x);
            }
        }
        return maxHeap.empty() ? 0 : maxHeap.top();
    }
};