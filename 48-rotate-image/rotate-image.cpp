class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> ma(rows,vector<int>(cols,0));
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                ma[j][cols-1-i]=matrix[i][j];
            }
        }
        matrix=ma;
    }
};