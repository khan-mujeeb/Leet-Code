class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        
        //find transpose of array
        for(int i=0;i<r;i++)
            for(int j=i;j<c;j++)
                swap(matrix[i][j],matrix[j][i]);
        //swap the 1st and last value of each row 
        for(int i=0;i<r;i++)
            for(int j=0;j<c/2;j++)
                swap(matrix[i][j],matrix[i][c-j-1]);
        
        
        
    }
};