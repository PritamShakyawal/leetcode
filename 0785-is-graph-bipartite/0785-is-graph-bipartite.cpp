class Solution {
    private:
    bool check(int node, vector<vector<int>>& graph, vector<int>& color){
        queue<int> q;
        q.push(node);
        
        color[node] = 1;
        
        while(!q.empty()){
            int front = q.front();
            q.pop();
            
            for(auto it : graph[front]){
                if(color[it] == -1){
                    color[it] = !color[front];
                    q.push(it);
                }
                    
                if(color[it] == color[front]){
                    return false;
                }
            }
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<int> color(V, -1); 
        
        for (int i = 0; i < V; i++) {
            if (color[i] == -1) {
                if (!check(i, graph, color)){
                    return false;
                }
            }
        }
        return true;
    }
};