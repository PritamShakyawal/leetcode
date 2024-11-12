class Solution {
public:
    int n, m;
    
    bool dfs(vector<vector<char>>& board, string& word, int i, int j, int index) {
        // If the index of the word equals the word length, it means we found the word
        if (index == word.size()) {
            return true;
        }

        // Check if the current cell is out of bounds or the character doesn't match
        if (i < 0 || i >= n || j < 0 || j >= m || board[i][j] != word[index]) {
            return false;
        }

        // Save the current character and mark it as visited by replacing it with a special character (e.g., '#')
        char temp = board[i][j];
        board[i][j] = '#'; // Mark as visited

        // Explore all four possible directions (up, down, left, right)
        bool found = dfs(board, word, i + 1, j, index + 1) ||
                     dfs(board, word, i - 1, j, index + 1) ||
                     dfs(board, word, i, j + 1, index + 1) ||
                     dfs(board, word, i, j - 1, index + 1);

        // Restore the original character for backtracking
        board[i][j] = temp;

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        n = board.size();
        m = board[0].size();

        // Try to start the DFS from every cell in the board
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                // If the current cell matches the first character of the word, start DFS
                if (board[i][j] == word[0] && dfs(board, word, i, j, 0)) {
                    return true;
                }
            }
        }
        return false;
    }
};
