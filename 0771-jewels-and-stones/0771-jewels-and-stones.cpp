class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int a = jewels.size();
        int b = stones.size();
        int sum = 0;
        for(int i=0; i<a; i++){
            int count = 0;
            for(int j=0; j<b; j++){
                if(jewels[i] == stones[j]){
                    count++;
                }
            }
            sum += count;
        }
        return sum;
    }
};