class Solution {
    private:
//     bool isPrime(int n){
//         if(n<=1)
//             return false;
        
//         for(int i=2; i<n; i++){
//             if(n%i == 0) return false;
//         }
//         return true;
//     }
public:
    int countPrimes(int n) {
//         int count = 0;
        
//         for(int i=2; i<n; i++){
//             if(isPrime(i))
//                 count++;
//         }
//         return count;
        
        
        
        int cnt = 0;
        vector<bool> prime(n+1, true);
        
        prime[0] = prime[1] = false;
        
        for(int i=2; i<n; i++){
            if(prime[i]){
                cnt++;
                for(int j=2*i; j<n; j=j+i){
                    prime[j] = 0;
                }
            }
        }
        
        return cnt;
    }
};