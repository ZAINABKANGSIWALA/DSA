class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle(numRows);
        triangle[0].resize(1);
        triangle[0][0]=1;
        printf("1\n");
        for(int i=1;i<numRows;i++)
    {
        triangle[i].resize(i+1);
        triangle[i][0] = triangle[i][i] = 1;
        printf("1");
        for(int j=1;j<i;j++)
        {
            triangle[i][j]=triangle[i-1][j-1]+triangle[i-1][j];
            printf("%d",triangle[i][j]);
        }
        printf("1\n");

    }
    return triangle;
    }
};