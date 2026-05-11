class Solution {
public:
    bool traverseSquare(vector<vector<char>>& board, int sr, int sc, int er, int ec){
        unordered_set<char> square;
        for(int row = sr; row <= er; row++){
            for(int col = sc; col <= ec; col++){
                if(board[row][col] == '.') continue;
                if(square.count(board[row][col])) return false;
                square.insert(board[row][col]);
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        //valid rows
        for(int row = 0; row < 9; row++){
        unordered_set<char>rows;
            for(int col = 0; col < 9; col++){
                if(board[row][col] == '.') continue;
                if(rows.count(board[row][col])){
                    return false;
                }
                rows.insert(board[row][col]);
            }
        }

        //valid columns
        for(int col = 0; col < 9; col++){
        unordered_set<char>columns;
            for(int row = 0; row < 9; row++){
                if(board[row][col] == '.') continue;
                if(columns.count(board[row][col])){
                    return false;
                }
                columns.insert(board[row][col]);
            }
        }

        //valid square
        for(int row = 0; row < 9 ;row+=3){
            int er = row + 2;
            for(int col = 0; col < 9; col+=3){
                int ec = col + 2;
                if(!traverseSquare(board, row, col, er, ec)) return false;
            }
        }

        return true;
    }
};
