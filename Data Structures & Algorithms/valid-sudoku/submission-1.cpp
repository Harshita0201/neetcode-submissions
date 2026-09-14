class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rows[9]; 
        unordered_set<char> cols[9]; 
        unordered_set<char> boxes[9];

        for(int r=0; r<9; r++){
            for(int c=0; c<9; c++){
                if(board[r][c]=='.') continue;
                int num=board[r][c];

                int box_num=(r/3)*3+(c/3);

                //check if num already exists
                if(rows[r].count(num) || cols[c].count(num)
                 || boxes[box_num].count(num)){
                    return false;; //duplicate present
                }
                //insert 
                rows[r].insert(num);
                cols[c].insert(num);
                boxes[box_num].insert(num);
            }
        }
        return true;
    }
};
