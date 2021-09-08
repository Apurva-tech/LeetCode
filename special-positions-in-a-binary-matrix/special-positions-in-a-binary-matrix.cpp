class Solution
{
public:
    int numSpecial(vector<vector<int>> &mat)
    {
        int rows = mat.size(), col = mat[0].size();
        int rsum[rows];
        int csum[col];
        int i, j;
        //get sum of rows
        for (i = 0; i < rows; i++)
        {
            rsum[i] = 0;
            for (j = 0; j < col; j++)
                rsum[i] += mat[i][j];
        }
        //get sum of coloumns
        for (i = 0; i < col; i++)
        {
            csum[i] = 0;
            for (j = 0; j < rows; j++)
                csum[i] += mat[j][i];
        }
        //If value in mat is one with sum of that row and col =1 then add this to result
        int count = 0;
        for (i = 0; i < rows; i++)
            for (j = 0; j < col; j++)
                if (mat[i][j] == 1 && rsum[i] == 1 && csum[j] == 1)
                    count++;
        return count;
    }
};