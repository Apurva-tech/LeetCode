class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int first_row = matrix[0][0], first_col = matrix[0][0];
        
        for(int i = 0; first_col && i < matrix.size(); i++)
            if(!matrix[i][0]) 
                first_col = 0; 
        
        for(int i = 0; first_row && i < matrix[0].size(); i++)
            if(!matrix[0][i]) 
                first_row = 0; 
        
        
        for(int i = 0; i < matrix.size(); i++)
            for(int j = 0; j < matrix[0].size(); j++) {
                if(!matrix[i][j]) 
                    matrix[0][j] = matrix[i][0] = 0;
            }
        
    
        for(int i = 1; i < matrix.size(); i++)
            for(int j = 1; j < matrix[0].size(); j++)
                if(!matrix[0][j] || !matrix[i][0])
                    matrix[i][j] = 0;
        
        
        if(!first_col) 
            for(int i = 0; i < matrix.size(); i++)
                matrix[i][0] = 0;  
        if(!first_row)
            for(int i = 0; i < matrix[0].size(); i++)
                matrix[0][i] = 0;
         
    }
};