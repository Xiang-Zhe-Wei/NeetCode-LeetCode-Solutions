class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<int>> row_map, col_map;
        map<pair<int,int>, unordered_set<int>> square_map;

        for(int i=0; i<9; ++i){
            for(int j=0; j<9; ++j){
                if(board[i][j] == '.') continue;

                pair<int, int> pairs = {i/3, j/3};
                if(row_map[i].count(board[i][j]) ||
                   col_map[j].count(board[i][j]) ||
                   square_map[pairs].count(board[i][j])){
                    return false;
                }
                row_map[i].insert(board[i][j]);
                col_map[j].insert(board[i][j]);
                square_map[pairs].insert(board[i][j]);
            }
        }
        return true;
    }
};
