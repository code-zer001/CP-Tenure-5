class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        short int rows = matrix.size();
        short int cols = matrix[0].size();
        bool row_1 = false;
        bool col_1 = false;

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++)
            {
                if(matrix[i][j] == 0){
                    if(i == 0){
                        row_1 = true;
                    }
                    if(j == 0){
                        col_1 = true;
                    }
                    else{
                        matrix[i][0] = 0;
                        matrix[0][j] = 0;
                    }
                }
            }
        }
        for(int i=1; i<rows;i++){
            for(int j=1; j<cols;j++){
                if(matrix[i][0] == 0){
                   for (int k = 0; k < cols; k++) {
                        matrix[i][k] = 0;
                    }
                }
                if(matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        if(row_1){
            for (int k = 0; k < cols; k++){
                matrix[0][k] = 0;
            }
        }
        if(col_1){
            for(int i=0;i<rows;i++){
                matrix[i][0] = 0;
            }
        }
    }
};