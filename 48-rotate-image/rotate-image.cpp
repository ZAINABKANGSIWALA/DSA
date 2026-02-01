class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> ma(row, vector<int>(col,0));
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col; j++)
            {
                ma[j][col-1-i] = matrix[i][j];
            }
        }
        matrix=ma;
    }
};