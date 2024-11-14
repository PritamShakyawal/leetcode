class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        int ans = 0;
        vector<int> dist(n + 1, 1e8); // Initialize distances as infinity (1-based indexing)
        dist[k] = 0; // Set the distance for the starting node (k is already 1-based)
        
        // Bellman-Ford algorithm
        for (int i = 0; i < n - 1; i++) {
            for (auto it : times) {
                int u = it[0]; // u is 1-based, no adjustment needed
                int v = it[1]; // v is 1-based, no adjustment needed
                int wt = it[2];
                if (dist[u] != 1e8 && dist[u] + wt < dist[v]) {
                    dist[v] = dist[u] + wt;
                }
            }
        }
        
        // Check if any node is unreachable
        for (int i = 1; i <= n; i++) {
            if (dist[i] == 1e8) return -1; // Not all nodes are reachable
            ans = max(ans, dist[i]); // Update the maximum delay
        }

        return ans;
    }
};
