class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int buffer[27*9] = {}; 
        for(int i = 0;i<9;i++){
            for(int j = 0;j<9;j++){
                if(board[i][j] == '.'){
                continue;
            }
                int num = board[i][j] -'1';
                buffer[num*27+i]++;
                buffer[num*27+9+j]++;
                buffer[num*27+18+ (i/3) * 3 + (j/3)]++;
                
            }
        }
        for(auto count:buffer){
            if(count > 1){
                return false;
            }
        }
        return true;

        
    }
};
