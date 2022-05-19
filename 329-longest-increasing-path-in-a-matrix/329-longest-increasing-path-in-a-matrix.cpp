class Solution {
public:

void DFS(int i,int j,int n,int m,vector<vector<int>>& matrix,vector<vector<int>>& v)
{
    if(i<n-1)
    {
        if(matrix[i+1][j]>matrix[i][j])
        {
            if(v[i+1][j]==1)
                DFS(i+1,j,n,m,matrix,v);
            v[i][j]=max(v[i+1][j]+1,v[i][j]);
        }
    }
    if(j<m-1)
    {
        if(matrix[i][j+1]>matrix[i][j])
        {
            if(v[i][j+1]==1)
                DFS(i,j+1,n,m,matrix,v);
            v[i][j]=max(v[i][j+1]+1,v[i][j]);
        }
    }
    if(i>0)
    {
        if(matrix[i-1][j]>matrix[i][j])
        {
            if(v[i-1][j]==1)
                DFS(i-1,j,n,m,matrix,v);
            v[i][j]=max(v[i-1][j]+1,v[i][j]);
        }
    }
    if(j>0)
    {
        if(matrix[i][j-1]>matrix[i][j])
        {
            if(v[i][j-1]==1)
                DFS(i,j-1,n,m,matrix,v);
            v[i][j]=max(v[i][j-1]+1,v[i][j]);
        }
    }
}


int longestIncreasingPath(vector<vector<int>>& matrix) {
    
    int n=matrix.size();
    int m=matrix[0].size();
    int ans=0;
    vector<vector<int>>v(201,vector<int>(201,1));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i][j]==1)
                DFS(i,j,n,m,matrix,v);
            ans=max(ans,v[i][j]);
        }
    }
    return ans;
}
};