class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int m = board.size(), n = board[0].size();
        for(int i=0; i < m; ++i){
            unordered_set<int> hashset;
            for(int j=0; j<n; ++j){
                if (board[i][j] == '.') continue;
                if(hashset.count(board[i][j])){
                    return false;
                }
                hashset.insert(board[i][j]);
            }
        }
        for(int j=0; j<m; ++j){
            unordered_set<int> hashset;
            for(int i=0; i < n; ++i){
                if (board[i][j] == '.') continue;
                if(hashset.count(board[i][j])){
                    return false;
                }
                hashset.insert(board[i][j]);
            }
        }

        for(int square=0; square < 9; ++square){
            unordered_set<int> hashset;
            for(int i=0; i < 3; ++i){
                for(int j=0; j<3; ++j){
                    int row = (square/3) * 3 + i;
                    int col = (square%3) * 3 + j;
                    if (board[row][col] == '.') continue;
                    if(hashset.count(board[row][col])){
                        return false;
                    }
                    hashset.insert(board[row][col]);
                }
            }
        }
        return true;
    }
};
